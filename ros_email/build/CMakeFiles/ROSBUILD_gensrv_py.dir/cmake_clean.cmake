FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/ros_email/msg"
  "../src/ros_email/srv"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/ros_email/srv/__init__.py"
  "../src/ros_email/srv/_SendMail.py"
  "../src/ros_email/srv/_SendMailPlus.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
