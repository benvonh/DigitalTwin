#include "window.h"
#include "window_theme.h"

#include "panel/log_history.h"
#include "panel/menu_bar.h"

#include "nexus/event/client.h"
#include "nexus/event/keyboard_event.h"
#include "nexus/event/mouse_event.h"
#include "nexus/event/viewport_capture_event.h"

#include "imgui.h"
#include "imgui_impl_sdl3.h"
#include "imgui_impl_opengl3.h"

#define SDL_TRY(function)                                            \
    do                                                               \
    {                                                                \
        if (!(function)) [[unlikely]]                                \
            throw std::runtime_error(EXPLAIN("{}", SDL_GetError())); \
    } while (0)

Nexus::Window::Window()
{
    LOG_BASIC("Constructing window...");

    SDL_TRY(SDL_Init(SDL_INIT_VIDEO));
    SDL_TRY(SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24));
    SDL_TRY(SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8));
    SDL_TRY(SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1));
    SDL_TRY(SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4));
    SDL_TRY(SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 6));
    SDL_TRY(SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,
                                SDL_GL_CONTEXT_PROFILE_COMPATIBILITY));

    LOG_EVENT("Initialized SDL with OpenGL 4.6 compatibility profile");

#ifdef _DEBUG
    const char *title = "Nexus (Debug)";
#else
    const char *title = "Nexus (Release)";
#endif
    constexpr auto flags = SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE;
    constexpr auto center = SDL_WINDOWPOS_CENTERED;

    m_Window = SDL_CreateWindow(title, 1280, 720, flags);

    SDL_TRY(m_Window != nullptr);
    SDL_TRY(SDL_SetWindowPosition(m_Window, center, center));

    LOG_EVENT("Created SDL window!");

    m_Context = SDL_GL_CreateContext(m_Window);

    SDL_TRY(m_Context != nullptr);
    SDL_TRY(SDL_GL_MakeCurrent(m_Window, m_Context));
    SDL_TRY(SDL_GL_SetSwapInterval(1));

    LOG_EVENT("Created OpenGL context!");

    _create_layer();

    Client::On<ViewportCaptureEvent>(
        [this](const ViewportCaptureEvent &e)
        {
            LOG_BASIC("Viewport capture = {}", e.Capture);

            ImGuiIO &io = ImGui::GetIO();

            m_InViewport = e.Capture;

            if (e.Capture)
            {
                SDL_TRY(SDL_SetWindowRelativeMouseMode(m_Window, true));

                io.ConfigFlags |= ImGuiConfigFlags_NoMouse;
            }
            else
            {
                const float mouseX = io.DisplaySize.x / 2;
                const float mouseY = io.DisplaySize.y / 2;

                SDL_WarpMouseInWindow(m_Window, mouseX, mouseY);
                SDL_TRY(SDL_SetWindowRelativeMouseMode(m_Window, false));

                io.ConfigFlags &= ~ImGuiConfigFlags_NoMouse;
            }
        });

    m_FileDialog = new FileDialog(m_Window);
    m_MultiViewport.start_engine();
}

Nexus::Window::~Window() noexcept(false)
{
    LOG_BASIC("Destructing window...");

    m_MultiViewport.stop_engine();

    delete m_FileDialog;

    _destroy_layer();

    SDL_TRY(SDL_GL_DestroyContext(m_Context));
    SDL_DestroyWindow(m_Window);
    SDL_Quit();
}

void Nexus::Window::show_exception(const Exception &e)
{
    LOG_ERROR("{}", e.what());

    Client::Send<ViewportCaptureEvent>(false);

    const auto flag = SDL_MESSAGEBOX_ERROR;
    const char *title = "Oops! An error occurred...";
    SDL_TRY(SDL_ShowSimpleMessageBox(flag, title, e.what(), m_Window));

    // Reset the ImGui layer to fix invalid states
    _destroy_layer();
    _create_layer();
}

void Nexus::Window::render_frame()
{
    const ImGuiIO &io = ImGui::GetIO();

    // Frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplSDL3_NewFrame();
    ImGui::NewFrame();

    // Draw
    ImGui::DockSpaceOverViewport();
    ImGui::ShowDemoWindow(&m_ShowDemo);

    _draw_window_flags();

    draw_menu_bar();
    draw_log_history();

    m_PrimProperty.draw();
    m_MultiViewport.draw();
    m_SceneHierarchy.draw();

    // Render
    ImGui::Render();
    glViewport(0, 0, io.DisplaySize.x, io.DisplaySize.y);
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    // Swap
    ImGui::UpdatePlatformWindows();
    ImGui::RenderPlatformWindowsDefault();
    SDL_TRY(SDL_GL_MakeCurrent(m_Window, m_Context));
    SDL_TRY(SDL_GL_SwapWindow(m_Window));
}

void Nexus::Window::handle_events()
{
    const ImGuiIO &io = ImGui::GetIO();

    // NOTE(Ben): I admit defeat in trying to fix the bug
    // where the first mouse click (left as to capture viewport mode)
    // is not registered by SDL. A second click is needed for ImGUI to
    // react properly again.
    if (m_InViewport)
    {
        SDL_PumpEvents();

        float x, y;
        auto state = SDL_GetRelativeMouseState(&x, &y);
        Client::Send<MouseEvent>(x, y, io.DeltaTime);

        const bool *keyboard = SDL_GetKeyboardState(nullptr);
        Client::Send<KeyboardEvent>(keyboard, io.DeltaTime);
    }
    else
    {
        SDL_Event event;

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT ||
                (event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED &&
                 event.window.windowID == SDL_GetWindowID(m_Window)))
            {
                m_Live = false;
                return;
            }

            ImGui_ImplSDL3_ProcessEvent(&event);
        }
    }
}

void Nexus::Window::_create_layer()
{
    LOG_BASIC("Creating ImGui layer...");

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ASSERT(ImGui_ImplOpenGL3_Init("#version 460 core"));
    ASSERT(ImGui_ImplSDL3_InitForOpenGL(m_Window, m_Context));

    LOG_EVENT("Created ImGui context!");

    ImGuiIO &io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    // TODO
    io.Fonts->AddFontFromFileTTF(R"(C:\Windows\Fonts\CascadiaCode.ttf)", 16.f);
    io.IniFilename = R"(C:\pixi_ws\DigitalTwin\imgui.ini)";

    ImGuiStyle &style = ImGui::GetStyle();
    ImVec4 *colors = style.Colors;
    WindowTheme::UpdateStyle(style);
    WindowTheme::UpdateColor(colors);

    LOG_EVENT("Updated ImGui style and colors!");
}

void Nexus::Window::_destroy_layer()
{
    LOG_BASIC("Destroying ImGui layer...");

    ImGui_ImplSDL3_Shutdown();
    ImGui_ImplOpenGL3_Shutdown();
    ImGui::DestroyContext();

    LOG_EVENT("Destroyed ImGui context!");
}

void Nexus::Window::_draw_window_flags()
{
    ImGui::SeparatorText("Swap Interval");

    if (ImGui::Button("Max Frame Rate"))
    {
        SDL_TRY(SDL_GL_SetSwapInterval(0));
        LOG_EVENT("Enabled max frame rate");
    }
    if (ImGui::Button("VSync"))
    {
        SDL_TRY(SDL_GL_SetSwapInterval(1));
        LOG_EVENT("Enabled VSync");
    }
    if (ImGui::Button("Adaptive VSync"))
    {
        SDL_TRY(SDL_GL_SetSwapInterval(-1));
        LOG_EVENT("Enabled Adaptive VSync");
    }
}