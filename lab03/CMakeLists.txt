cmake_minimum_required(VERSION 2.8)

project (lab)

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)
set(PROJECT_LINK_DIRECTORY ${PROJECT_SOURCE_DIR})
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -g")

file(GLOB source ${PROJECT_SOURCE_DIR}/src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(lab lab03.cpp ${source})
add_compile_options(${CMAKE_CXX_FLAGS})
