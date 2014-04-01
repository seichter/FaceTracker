#
# CMake Build System for libFaceTracker 
#
# 2014 - Hartmut Seichter <http://technotecture.com>
#

cmake_minimum_required(VERSION 2.8.12)

project(facetracker)

find_package(OpenCV REQUIRED)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(src)
