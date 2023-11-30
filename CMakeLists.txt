# CMakeLists.txt in the root directory

cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Add the library and its source files
add_library(my_library SHARED src/MathFunctions/MathFunctions.cxx)
set_target_properties(my_library PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

if(WIN32)
    target_compile_definitions(my_library PRIVATE MY_LIBRARY_EXPORTS)
endif()

# Set the output directory for the library (optional)
set_target_properties(my_library PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)

# Add the main executable and link with the library
add_executable(my_project src/tutorial.cpp)
target_link_libraries(my_project PRIVATE my_library)

# CMakeLists.txt in the root directory
target_include_directories(my_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/MathFunctions)
target_include_directories(my_project PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/MathFunctions)

# Include the test directory
add_subdirectory(test)

enable_testing()

# Add your test executable and specify test cases
add_executable(MyTest test_main.cpp)
add_test(NAME MyTest COMMAND MyTest)
