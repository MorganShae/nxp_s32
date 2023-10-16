add_executable(Test1 test_main.cpp)
target_link_libraries(Test1 PRIVATE MyExecutable)

add_executable(Test2 test_main.cpp)
target_link_libraries(Test2 PRIVATE MyExecutable Boost::unit_test_framework)
