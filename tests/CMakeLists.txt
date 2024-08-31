cmake_minimum_required(VERSION 3.22)

project(ApplicationTest)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(../cmake/Test.cmake)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
  merge-sort-test.cpp
)

FetchContent_Declare(
  sort-lib
  SOURCE_DIR ${CMAKE_SOURCE_DIR}/../
)
FetchContent_MakeAvailable(sort-lib)

target_link_libraries(${PROJECT_NAME} 
  PRIVATE 
    sort-lib
    gtest_main)


add_test(
  NAME ${PROJECT_NAME}
  COMMAND ${PROJECT_NAME}
)