# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Define your project and its version
project(MyProject VERSION 1.0)

# Add subdirectories if you have them
# add_subdirectory(src)
# add_subdirectory(test)

# Define your main executable or library target
add_executable(my_executable main.cpp)

# Link any necessary libraries
# target_link_libraries(my_executable PRIVATE Boost::boost)
