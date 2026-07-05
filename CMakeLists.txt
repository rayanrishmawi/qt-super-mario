cmake_minimum_required(VERSION 3.16)

project(qt_super_mario)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(qt_super_mario
    src/main.cpp
    src/player.cpp
    include/player.hpp
)

target_include_directories(qt_super_mario PRIVATE include)

target_link_libraries(qt_super_mario PRIVATE Qt6::Widgets)
