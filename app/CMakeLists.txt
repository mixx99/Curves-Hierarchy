cmake_minimum_required(VERSION 3.11)
project(FirstApp)

add_executable(FirstApp main.cpp)
target_link_libraries(FirstApp PRIVATE CurveLIB)
