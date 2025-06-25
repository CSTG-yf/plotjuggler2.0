# Install script for directory: D:/gitproject/plotjuggler2/plotjuggler_plugins

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/gitproject/plotjuggler2/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataLoadCSV/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataLoadMCAP/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataLoadParquet/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataLoadULog/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataStreamSample/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataStreamWebsocket/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataStreamUDP/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataStreamMQTT/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/DataStreamZMQ/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/StatePublisherCSV/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/VideoViewer/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/ToolboxQuaternion/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/ToolboxFFT/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/ToolboxLuaEditor/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/ParserProtobuf/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/ParserROS/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/ParserDataTamer/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/ParserLineInflux/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/PluginsZcm/cmake_install.cmake")
  include("D:/gitproject/plotjuggler2/plotjuggler_plugins/ParserIDL/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "D:/gitproject/plotjuggler2/plotjuggler_plugins/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
