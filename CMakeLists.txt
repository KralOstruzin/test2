cmake_minimum_required(VERSION 3.5)

project(Semestralka LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Semestralka main.cpp vozidlo.h vozidlo.cpp auto.h auto.cpp kolo.h kolo.cpp vozovypark.h vozovypark.cpp)
