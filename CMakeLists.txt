cmake_minimum_required(VERSION 3.25)

project(TicTacToe VERSION 1.0)

set(SOURCES
	src/main.cpp
	src/ui.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC inc/)
