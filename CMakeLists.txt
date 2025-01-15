cmake_minimum_required(VERSION 3.30)
project(project_up)

set(CMAKE_CXX_STANDARD 20)

add_executable(project_up main.cpp
        dealingCards.cpp
        dealingCards.h
        gameLogic.cpp
        gameLogic.h)
