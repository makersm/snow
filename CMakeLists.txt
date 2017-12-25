cmake_minimum_required(VERSION 3.3)
project(snow)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CSnow.cpp CSnow.h)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

add_executable(snow ${SOURCE_FILES})
target_link_libraries(snow curses)