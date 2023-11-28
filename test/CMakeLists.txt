# CMakeLists.txt in the 'test' directory

# Add the test executable and its source files
add_executable(test_my_project test_main.cpp test_file1.cpp)

# Link the test executable with the main project executable
target_link_libraries(test_my_project PRIVATE my_project)

# Add the test cases
add_test(NAME MyProjectTests COMMAND test_my_project)
