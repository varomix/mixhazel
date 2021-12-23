cmake_minimum_required(VERSION 3.21)
project(mixhazel_engine)

set(CMAKE_CXX_STANDARD 17)

include_directories(vendor/spdlog/include)
add_library(mixhazel_engine SHARED Hazel/Core.h Hazel/Application.cpp Hazel/Application.h MixHazel.h Hazel/EntryPoint.h Hazel/Log.cpp Hazel/Log.h)
