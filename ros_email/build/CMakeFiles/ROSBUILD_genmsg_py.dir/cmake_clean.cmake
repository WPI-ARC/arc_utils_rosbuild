FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/ros_email/msg"
  "../src/ros_email/srv"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/ros_email/msg/__init__.py"
  "../src/ros_email/msg/_attachment.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
