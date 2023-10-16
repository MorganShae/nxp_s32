add_executable(MyTests test_main.cpp)
target_link_libraries(Test2 PRIVATE MyExecutable)

add_executable(MyTests test_main.cpp)
target_link_libraries(Test1 PRIVATE MyExecutable Boost::unit_test_framework)
