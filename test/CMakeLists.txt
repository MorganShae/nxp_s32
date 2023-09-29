add_executable(MyTests test_main.cpp)
target_link_libraries(MyTests PRIVATE MyExecutable)

add_executable(MyTests test_main.cpp)
target_link_libraries(MyTests PRIVATE MyExecutable Boost::unit_test_framework)
