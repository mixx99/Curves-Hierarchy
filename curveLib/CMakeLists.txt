cmake_minimum_required(VERSION 3.11)
project(CurveLIB)

add_library(CurveLIB STATIC
  src/circle.cpp
  src/ellipse.cpp
  src/helix.cpp
  src/point.cpp
)
target_include_directories(CurveLIB PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)