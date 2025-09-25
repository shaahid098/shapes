cmake_minimum_required(VERSION 3.26)
project(Shapes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Shapes ShapeDriver.cpp
        Shape.cpp
        Shape.h
        Rect.cpp
        Rect.h
        Circle.cpp
        Circle.h
        Triangle.cpp
        Triangle.h
        Square.cpp
        Square.h)
