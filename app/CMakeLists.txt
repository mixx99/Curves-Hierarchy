cmake_minimum_required(VERSION 3.11)
project(FirstApp)

add_executable(FirstApp 
src/main.cpp
src/solution.cpp
)
target_link_libraries(FirstApp PRIVATE CurveLIB)
