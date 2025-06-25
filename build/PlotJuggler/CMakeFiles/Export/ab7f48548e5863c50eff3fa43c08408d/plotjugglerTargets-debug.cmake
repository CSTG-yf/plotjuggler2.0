#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "plotjuggler_base" for configuration "Debug"
set_property(TARGET plotjuggler_base APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(plotjuggler_base PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/plotjuggler_base.lib"
  )

list(APPEND _cmake_import_check_targets plotjuggler_base )
list(APPEND _cmake_import_check_files_for_plotjuggler_base "${_IMPORT_PREFIX}/lib/plotjuggler_base.lib" )

# Import target "plotjuggler_qwt" for configuration "Debug"
set_property(TARGET plotjuggler_qwt APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(plotjuggler_qwt PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/plotjuggler_qwt.lib"
  )

list(APPEND _cmake_import_check_targets plotjuggler_qwt )
list(APPEND _cmake_import_check_files_for_plotjuggler_qwt "${_IMPORT_PREFIX}/lib/plotjuggler_qwt.lib" )

# Import target "lua" for configuration "Debug"
set_property(TARGET lua APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(lua PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C;CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/lua.lib"
  )

list(APPEND _cmake_import_check_targets lua )
list(APPEND _cmake_import_check_files_for_lua "${_IMPORT_PREFIX}/lib/lua.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
