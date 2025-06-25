# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "D:/gitproject/plotjuggler2/_deps/backward-cpp-src")
  file(MAKE_DIRECTORY "D:/gitproject/plotjuggler2/_deps/backward-cpp-src")
endif()
file(MAKE_DIRECTORY
  "D:/gitproject/plotjuggler2/_deps/backward-cpp-build"
  "D:/gitproject/plotjuggler2/_deps/backward-cpp-subbuild/backward-cpp-populate-prefix"
  "D:/gitproject/plotjuggler2/_deps/backward-cpp-subbuild/backward-cpp-populate-prefix/tmp"
  "D:/gitproject/plotjuggler2/_deps/backward-cpp-subbuild/backward-cpp-populate-prefix/src/backward-cpp-populate-stamp"
  "D:/gitproject/plotjuggler2/_deps/backward-cpp-subbuild/backward-cpp-populate-prefix/src"
  "D:/gitproject/plotjuggler2/_deps/backward-cpp-subbuild/backward-cpp-populate-prefix/src/backward-cpp-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/gitproject/plotjuggler2/_deps/backward-cpp-subbuild/backward-cpp-populate-prefix/src/backward-cpp-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/gitproject/plotjuggler2/_deps/backward-cpp-subbuild/backward-cpp-populate-prefix/src/backward-cpp-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
