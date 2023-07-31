cmake_minimum_required(VERSION 3.0.0)
project(monitor_capture VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_library(monitor_capture monitor_capture.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
