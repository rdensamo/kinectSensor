file(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "../src/phidgets/msg"
  "../src/phidgets/srv"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/phidgets/srv/__init__.py"
  "../src/phidgets/srv/_servo_reference.py"
  "../src/phidgets/srv/_pid.py"
  "../src/phidgets/srv/_interface_kit.py"
  "../src/phidgets/srv/_lidar_control.py"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
