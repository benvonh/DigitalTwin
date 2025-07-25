#include "nexus/bridge/node.hpp"
#include "nexus/scene/manager.hpp"
#include "pxr/core/gf/matrix4d.h"
#include "pxr/core/gf/quatd.h"
#include "pxr/core/gf/rotation.h"
#include "pxr/core/gf/vec3d.h"

namespace Nexus
{
  using namespace std::chrono_literals;
}

Nexus::bridge::Node::Node() : rclcpp::Node("digital_twin")
{
  this->buffer = std::make_unique<tf2_ros::Buffer>(this->get_clock());
  this->listener = std::make_shared<tf2_ros::TransformListener>(*this->buffer);
  this->timer = this->create_wall_timer(3ms, [this]()
                                        {
      try
      {
        auto time = scene::Manager::GetTime();
        auto permit = scene::Manager::GetRobotPermit();
        auto &robot = permit.robot;

        for (auto &[name, xform] : robot.xforms)
        {
          const auto look = this->buffer->lookupTransform("core", name.c_str(), tf2::TimePointZero);
          const auto &rotation = look.transform.rotation;
          const auto &translation = look.transform.translation;
          pxr::GfQuatd q(rotation.w, rotation.x, rotation.y, rotation.z);
          pxr::GfVec3d t(translation.x, translation.y, translation.z);
          pxr::GfMatrix4d m(q, t);
          xform.Set(m, time);
        }
      }
      catch (const tf2::TransformException &e)
      {
        RCLCPP_ERROR_THROTTLE(this->get_logger(), *this->get_clock(), 1000, e.what());
      } });
}