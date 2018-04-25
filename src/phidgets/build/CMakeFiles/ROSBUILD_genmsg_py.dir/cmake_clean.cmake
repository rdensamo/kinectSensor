file(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "../src/phidgets/msg"
  "../src/phidgets/srv"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/phidgets/msg/__init__.py"
  "../src/phidgets/msg/_accelerometer_params.py"
  "../src/phidgets/msg/_led_params.py"
  "../src/phidgets/msg/_rfid_params.py"
  "../src/phidgets/msg/_joystick_params.py"
  "../src/phidgets/msg/_spatial_params.py"
  "../src/phidgets/msg/_pantilt_params.py"
  "../src/phidgets/msg/_encoder_params.py"
  "../src/phidgets/msg/_manager_params.py"
  "../src/phidgets/msg/_ir_params.py"
  "../src/phidgets/msg/_stepper_params.py"
  "../src/phidgets/msg/_textlcd_params.py"
  "../src/phidgets/msg/_servo_params.py"
  "../src/phidgets/msg/_phsensor_params.py"
  "../src/phidgets/msg/_pid_params.py"
  "../src/phidgets/msg/_interface_kit_params.py"
  "../src/phidgets/msg/_motor_params.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
