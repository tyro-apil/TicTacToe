project(TicTacToe VERSION 1.0)

target_include_directories(TicTacToe PRIVATE inc/)

set(SOURCES
	src/main.cpp
	src/ui.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
