cmake_minimum_required(VERSION 3.21)
project(sandbox)

set(CMAKE_CXX_STANDARD 17)

include_directories(../mixhazel_engine)
add_executable(sandbox main.cpp)

target_link_libraries(${PROJECT_NAME} mixhazel_engine)
