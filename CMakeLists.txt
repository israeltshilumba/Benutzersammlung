cmake_minimum_required(VERSION 3.20)
project(Benutzersammlung)

set(CMAKE_CXX_STANDARD 14)

add_executable(Benutzersammlung main.cpp collection/Collection.cpp collection/Collection.h)
