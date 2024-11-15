cmake_minimum_required(VERSION 3.10)

project(Sorters)

set(CMAKE_CXX_STANDARD 17)

add_executable(Sorters
    main.cpp
    sort_algorithms.cpp
    array_manager.cpp
    sort_factory.cpp
    utils.cpp
)