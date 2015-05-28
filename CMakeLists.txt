cmake_minimum_required(VERSION 3.2)
project(TicTacToeC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES generic-tictactoe.c)
add_executable(TicTacToeC ${SOURCE_FILES})