cmake_minimum_required(VERSION 3.0)

project(getChange)

set(CMAKE_CXX_STANDARD 11)

add_executable(getChange main.cpp
                        State_1.cpp
                        State_2.cpp
                        State_5.cpp
                        State_10.cpp
                        State_20.cpp
                        State_50.cpp)