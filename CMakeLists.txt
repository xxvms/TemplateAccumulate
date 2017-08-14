cmake_minimum_required(VERSION 3.8)
project(TemplateAccumulate)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Accum.cpp Accum.h)
add_executable(TemplateAccumulate ${SOURCE_FILES})