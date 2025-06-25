#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "plotjuggler_base" for configuration "MinSizeRel"
set_property(TARGET plotjuggler_base APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(plotjuggler_base PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "CXX"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/lib/plotjuggler_base.lib"
  )

list(APPEND _cmake_import_check_targets plotjuggler_base )
list(APPEND _cmake_import_check_files_for_plotjuggler_base "${_IMPORT_PREFIX}/lib/plotjuggler_base.lib" )

# Import target "plotjuggler_qwt" for configuration "MinSizeRel"
set_property(TARGET plotjuggler_qwt APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(plotjuggler_qwt PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "CXX"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/lib/plotjuggler_qwt.lib"
  )

list(APPEND _cmake_import_check_targets plotjuggler_qwt )
list(APPEND _cmake_import_check_files_for_plotjuggler_qwt "${_IMPORT_PREFIX}/lib/plotjuggler_qwt.lib" )

# Import target "lua" for configuration "MinSizeRel"
set_property(TARGET lua APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(lua PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "C;CXX"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/lib/lua.lib"
  )

list(APPEND _cmake_import_check_targets lua )
list(APPEND _cmake_import_check_files_for_lua "${_IMPORT_PREFIX}/lib/lua.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
