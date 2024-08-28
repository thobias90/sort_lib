# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.12)

# Print information
message(STATUS "..:: sort-lib ::..")

# Set the project name
project(sort-lib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files for the library
set(SOURCES
  src/merge-sort.cpp
)

# Create the static library
add_library(${PROJECT_NAME} STATIC ${SOURCES})

# Set the include directories for the library
target_include_directories(${PROJECT_NAME} 
  PUBLIC 
    include
)