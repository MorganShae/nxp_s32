# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define the project for the tests
project(MyTests)

# Add an executable for Test1
add_executable(Test1 test_main.cpp)

# Add tests
add_test(NAME TestFile1 COMMAND Test1)

