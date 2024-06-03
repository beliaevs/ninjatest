cmake_minimum_required(VERSION 3.17)  # CMake version check
project(ninjatest)               # Create project "ninjatest"
set(CMAKE_CXX_STANDARD 17)            # Enable c++17 standard

add_executable(ninjatest main.cpp f.cpp f.h)
