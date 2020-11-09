cmake_minimum_required(VERSION 3.17)

project(intentRecognizer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

option(BUILD_TEST "Build Unit tests" ON)

set(SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

include_directories(${INCLUDE_DIR})

set(INSTALL_BIN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build/bin/")
set(INSTALL_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build/lib/")
set(INSTALL_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build/include/")

add_subdirectory(external)
add_subdirectory(src)

if(BUILD_TEST)
  add_subdirectory(test)
endif()
