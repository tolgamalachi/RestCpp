cmake_minimum_required(VERSION 3.6)
project(RestCpp)

set(CMAKE_CXX_STANDARD 11)
find_package(Threads)

set(SOURCE_FILES main.cpp)
add_executable(RestCpp ${SOURCE_FILES})
target_link_libraries(RestCpp net_static)
target_link_libraries (RestCpp ${CMAKE_THREAD_LIBS_INIT})

