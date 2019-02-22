cmake_minimum_required(VERSION 3.10)
project(MouseTrapCar_Simulator)

set(CMAKE_CXX_STANDARD 11)

add_executable(MouseTrapCar_Simulator main.cpp MouseTrapCar.cpp MouseTrapCar.h Interface.cpp Interface.h)