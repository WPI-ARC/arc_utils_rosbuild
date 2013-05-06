FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/ros_email/msg"
  "../src/ros_email/srv"
  "CMakeFiles/rosbuild_precompile"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/rosbuild_precompile.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
