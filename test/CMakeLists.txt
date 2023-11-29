# CMakeLists.txt in the 'test' directory

# Add the test executable and its source files
add_executable(test_my_project test_main.cpp test_file1.cpp)

# Link the test executable with the library
target_link_libraries(test_my_project PRIVATE my_library)

# Add the include directories for the library
target_include_directories(test_my_project PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../src/MathFunctions)

# Add the test cases
add_test(NAME MyProjectTests COMMAND test_my_project)
