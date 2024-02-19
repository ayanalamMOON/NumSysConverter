cmake_minimum_required(VERSION 3.27)
project(SG2)

set(CMAKE_CXX_STANDARD 11)

add_executable(SG2 main.cpp
        calculator.cpp
        CrossCheckCalculator.cpp
        CompleteCalculator.cpp
        TestCAL.cpp)
