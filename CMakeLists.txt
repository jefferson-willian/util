cmake_minimum_required(VERSION 2.8)

project(util)

# Source files.
file(GLOB SOURCES "src/*.cpp")

# Flag to compile using c+11.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Include directories.
include_directories(include)

# Executable.
add_library(util ${SOURCES})
