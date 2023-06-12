project(TicTacToe VERSION 1.0)

target_include_directories(TicTacToe PRIVATE src/)

set(SOURCES
	src/main.cpp
)

add_executable(${PROJECT} ${SOURCES})
