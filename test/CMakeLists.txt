cmake_minimum_required(VERSION 3.10)

project(MyProject)

add_executable(Test1 test_main.cpp)
target_link_libraries(Test1 PRIVATE MyExecutable)