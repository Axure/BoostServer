cmake_minimum_required(VERSION 3.3)
project(BoostServer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/main/cpp/Server.cpp src/main/cpp/Server.h)

set(EXAMPLE_TEST src/test/ExampleTest.cpp)

add_executable(BoostServer ${SOURCE_FILES} src/main/cpp/Server.cpp src/main/cpp/Server.h)

add_executable(ExampleTest ${EXAMPLE_TEST})