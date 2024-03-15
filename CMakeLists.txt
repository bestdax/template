cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(template VERSION 1.0)
add_executable(${PROJECT_NAME} main.cpp template.cpp)
