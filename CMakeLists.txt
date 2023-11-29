# CMakeLists.txt in the root directory

cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the library and its source files
add_library(my_library STATIC src/MathFunctions/MathFunctions.cxx)

# Set the output directory for the library (optional)
set_target_properties(my_library PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)

# Add the main executable and link with the library
add_executable(my_project src/tutorial.cpp)
target_link_libraries(my_project PRIVATE my_library)

# Include the test directory
add_subdirectory(test)
