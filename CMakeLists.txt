cmake_minimum_required(VERSION 3.10)

project(binary-serach-tree)

file(GLOB project_SOURCES
	src/*.cpp
)

add_executable(app ${project_SOURCES})
