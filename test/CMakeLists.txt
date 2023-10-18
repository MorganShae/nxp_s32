cmake_minimum_required(VERSION 3.10)

project(MyTest)

add_executable(Test1 test_file1.cpp test_main.cpp)
target_link_libraries(Test1 PRIVATE MyExecutable)