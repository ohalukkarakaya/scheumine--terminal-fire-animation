cmake_minimum_required(VERSION 3.10)
project(scheumine)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/development/include)
include_directories(${CMAKE_SOURCE_DIR}/development/src)
include_directories(${CMAKE_SOURCE_DIR}/global_variables)

file(
        GLOB_RECURSE SRC_FILES
        "${CMAKE_SOURCE_DIR}/development/src/*.cpp"
)
add_executable(scheumine ${SRC_FILES} main.cpp)