# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.15)

set(CMAKE_SOURCE_DIR /workspaces/nxp_s32)

# Define your project
project(MyProject)

# Add the source files for your main program and math functions
add_executable(MyExecutable src/tutorial.cxx src/MathFunctions/MathFunctions.cxx)

# Add subdirectories if you have them
add_subdirectory(src)
add_subdirectory(test)

enable_testing()
