cmake_minimum_required(VERSION 3.12)
project(MyProject)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

# Assuming MyExecutable is a library
add_library(MyExecutable main.cpp other_file.cpp)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
else()
    message(FATAL_ERROR "Boost not found. Please install or provide Boost.")
endif()
