cmake_minimum_required(VERSION 3.12)
project(sortinglibrary)

set(CMAKE_CXX_STANDARD 11)

# Library
add_library(sortinglibrary STATIC src/sorting.cpp)

target_include_directories(sortinglibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

