cmake_minimum_required(VERSION 3.21)
project(mixhazel)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("${PROJECT_SOURCE_DIR}/mixhazel_engine")
add_subdirectory("${PROJECT_SOURCE_DIR}/sandbox")
