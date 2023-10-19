find_package(Boost REQUIRED COMPONENTS unit_test_framework)

# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.15)

# Define your project
project(MyProject)

# Add the source files for your main program and math functions
add_executable(MyExecutable src/tutorial.cxx src/MathFunctions/MathFunctions.cxx)

# Add subdirectories if you have them
add_subdirectory(src)
add_subdirectory(test)

# Link any necessary libraries
target_link_libraries(MyExecutable PRIVATE Boost::unit_test_framework)

