# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define the project for the tests
project(MyTests)

# Add an executable for Test1
add_executable(Test1 test_main.cpp test_file1.cpp)

# Link the test executable with the main project executable
target_link_libraries(test_my_project my_project)

# Add the test cases
add_test(NAME MyProjectTests COMMAND test_my_project)
