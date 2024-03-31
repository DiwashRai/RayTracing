cmake_minimum_required(VERSION 3.28)
project(raytracing)

set(CMAKE_CXX_STANDARD 20)

add_executable(raytracing main.cpp
        vec3.h
        color.h
        ray.h
        hittable.h
        sphere.h
        hittable_list.h
        common.h
        interval.h)
