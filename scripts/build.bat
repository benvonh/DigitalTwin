call C:\pixi_ws\ros2-windows\setup.bat
cd C:\pixi_ws\DigitalTwin\build
pixi run --manifest-path ..\.. cmake --build . --target app --config Release -- /m