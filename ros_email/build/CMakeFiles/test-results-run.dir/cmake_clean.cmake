FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/ros_email/msg"
  "../src/ros_email/srv"
  "CMakeFiles/test-results-run"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/test-results-run.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
