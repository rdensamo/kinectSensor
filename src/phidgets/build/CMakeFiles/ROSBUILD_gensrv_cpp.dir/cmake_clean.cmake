file(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "../src/phidgets/msg"
  "../src/phidgets/srv"
  "CMakeFiles/ROSBUILD_gensrv_cpp"
  "../srv_gen/cpp/include/phidgets/servo_reference.h"
  "../srv_gen/cpp/include/phidgets/pid.h"
  "../srv_gen/cpp/include/phidgets/interface_kit.h"
  "../srv_gen/cpp/include/phidgets/lidar_control.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/ROSBUILD_gensrv_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
