cmake_minimum_required(VERSION 3.14)
project(curveLIB)

add_library(curveLIB STATIC
  src/circle.cpp
  src/ellipse.cpp
  src/helix.cpp
)