cmake_minimum_required(VERSION 3.12)
project(MyProject)

add_subdirectory(src)
add_subdirectory(test)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
else()
    message(FATAL_ERROR "Boost not found. Please install or provide Boost.")
endif()
