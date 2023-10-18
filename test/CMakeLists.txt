cmake_minimum_required(VERSION 3.10)

project(MyProject)

add_executable(Test1 test_main.py)
target_link_libraries(Test1 PRIVATE MyExecutable)

add_executable(Test2 test_main.py)

# Find Boost
find_package(Boost REQUIRED COMPONENTS unit_test_framework)

# Link against Boost unit test framework
target_link_libraries(Test2 PRIVATE MyExecutable Boost::unit_test_framework)
