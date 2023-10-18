# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define your project
project(MyProject)

# Add the source files for your main program and math functions
add_executable(MyExecutable src/tutorial.cxx src/MathFunctions/MathFunctions.cpp)

# Add subdirectories if you have them
add_subdirectory(src)
add_subdirectory(test)

# Link any necessary libraries
# target_link_libraries(my_executable PRIVATE Boost::boost)
