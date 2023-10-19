# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define the project for the tests
project(MyTests)

# Add an executable for Test1
add_executable(Test1 test_main.cpp test_file1.cpp)
target_sources(Test1 PRIVATE src/MathFunctions/MathFunctions.cxx) 

# Link with Boost unit test framework
target_link_libraries(Test1 PRIVATE Boost::unit_test_framework)

# Add tests
add_test(NAME TestFile1 COMMAND Test1)

