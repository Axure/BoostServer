cmake_minimum_required(VERSION 3.3)
project(BoostServer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/test/main.cpp src/main/cpp/Server.cpp src/main/cpp/Server.h)

set(EXAMPLE_TEST src/test/ExampleTest.cpp)

SET(Boost_USE_STATIC_LIBS ON)

find_package(Boost 1.57.0 COMPONENTS log thread system REQUIRED)
find_package(Boost 1.57.0 COMPONENTS log thread system REQUIRED)

add_executable(BoostServer ${SOURCE_FILES} src/main/cpp/Server.cpp src/main/cpp/Server.h)

add_executable(ExampleTest ${EXAMPLE_TEST} src/main/cpp/http/HttpServer.cpp src/main/cpp/http/HttpServer.h)
TARGET_LINK_LIBRARIES(ExampleTest ${Boost_LIBRARIES})