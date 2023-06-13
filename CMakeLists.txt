cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

# Find sortinglibrary
add_subdirectory(sortinglibrary)

# Executable using sortinglibrary
add_executable(myapp main.cpp)

target_link_libraries(myapp PRIVATE sortinglibrary)
target_include_directories(myapp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/sortinglibrary/include)

