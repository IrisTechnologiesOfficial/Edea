
cmake_minimum_required(VERSION 2.8)

project(edea)

if(CMAKE_VERSION VERSION_LESS 3)
    add_definitions(-std=c++14)
else()
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if(POLICY CMP0054)
  cmake_policy(SET CMP0054 NEW)
endif()

option(DOCS "Generate documentation" OFF)
option(EXAMPLES "Install code examples" ON)
option(TESTS "Install unit tests" OFF)
option(PACK "Build installer packages with CPack" OFF)

if(DOCS)
    find_package(Doxygen)
    add_subdirectory(docs)
endif()