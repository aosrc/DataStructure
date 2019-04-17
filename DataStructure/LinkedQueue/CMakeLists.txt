cmake_minimum_required(VERSION 3.12)
project(LinkedQueue)

set(CMAKE_CXX_STANDARD 14)

add_executable(LinkedQueue main.cpp Queue.h LQueue.h Link.h)