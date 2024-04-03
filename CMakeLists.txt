cmake_minimum_required(VERSION 3.27)
project(Conversion C)

set(CMAKE_C_STANDARD 11)

add_executable(Conversion main.c
        b2d.c
        b2o.c
        d2b.c
        d2o.c
        o2b.c
        o2d.c)
