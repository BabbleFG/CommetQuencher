# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\CommetQuencger_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CommetQuencger_autogen.dir\\ParseCache.txt"
  "CommetQuencger_autogen"
  )
endif()
