cmake_minimum_required(VERSION 3.5)

project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading Hello World App"
        LANGUAGES CXX)

add_executable(HelloApp main.cpp
        src/pyramid.cpp
        src/cube.cpp)

target_compile_features(HelloApp PRIVATE cxx_std_20)

target_include_directories(HelloApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

