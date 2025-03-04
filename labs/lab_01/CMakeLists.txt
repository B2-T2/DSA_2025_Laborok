cmake_minimum_required(VERSION 3.29)
project(lab_01 C)

set(CMAKE_C_STANDARD 23)

add_executable(lab_01 main.c
        func.h.c
        func.h.h
        ../../courses/course_03/main.c
        ../../courses/course_02/main.c)
