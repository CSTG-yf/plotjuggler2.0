#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fastcdr" for configuration "MinSizeRel"
set_property(TARGET fastcdr APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(fastcdr PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "CXX;RC"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/lib/libfastcdr.lib"
  )

list(APPEND _cmake_import_check_targets fastcdr )
list(APPEND _cmake_import_check_files_for_fastcdr "${_IMPORT_PREFIX}/lib/libfastcdr.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
