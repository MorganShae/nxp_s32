# CMakeLists.txt in the root directory

cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Add the library and its source files
add_library(mathfunctions STATIC src/MathFunctions/MathFunctions.cxx)

# Add the main executable and link with the library
add_executable(my_project src/tutorial.cpp)
target_link_libraries(my_project PRIVATE mathfunctions)

# Include the test directory
add_subdirectory(test)
