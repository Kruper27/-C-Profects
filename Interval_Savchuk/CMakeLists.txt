cmake_minimum_required(VERSION 3.13)
project(Interval_Sav C)


set(CMAKE_C_STANDARD 99)



set(BUILD_1 Savchuk_Interval_test.c.c)
add_executable(Test_ Savchuk_Interval_Main.c Intarval.h Set_of_Int.h)
