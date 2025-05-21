cmake_minimum_required(VERSION 3.27)
project(ODrive_Rust)

set(CMAKE_CXX_STANDARD 14)

add_executable(ODrive_Rust main.cpp
        control_law.hpp
        field_oriented_controller.cpp
        field_oriented_controller.hpp
        resistance_measurement_controller.cpp
        resistance_measurement_controller.hpp
        motor.cpp
        motor.hpp
        self_controller.cpp
        self_controller.hpp)
