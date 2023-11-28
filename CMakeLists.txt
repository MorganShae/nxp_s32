# CMakeLists.txt in the root directory

cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Add the main executable and its source files
add_executable(my_project src/MathFunctions/MathFunctions.cxx)

# Include the test directory
add_subdirectory(test)
