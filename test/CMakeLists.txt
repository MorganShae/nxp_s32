# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define the project for the tests
project(MyTests)

# Add an executable for Test1
add_executable(Test1 test_main.cpp test_file1.cpp)
target_sources(Test1 PRIVATE ${CMAKE_SOURCE_DIR}/src/MathFunctions/MathFunctions.cpp)  # Add MathFunctions.cpp source file

# Link with Boost unit test framework
target_link_libraries(Test1 PRIVATE Boost::unit_test_framework)

# If you have any additional resources (files, data, etc.) needed for testing, you can copy them to the build directory.
# For example, if you have a test data file 'test_data.txt':
# configure_file(test_data.txt ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
