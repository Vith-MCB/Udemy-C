cmake_minimum_required(VERSION 3.21)
project(Udemy-C C)

set(CMAKE_C_STANDARD 99)

add_executable(basics Projects/Basics/basics.c)
add_executable(comments Projects/Basics/comments.c)
add_executable(helloworld Projects/Basics/helloworld.c)
add_executable(my_name Projects/Basics/my_name.c)
add_executable(reading_input Projects/Basics/reading_input.c)

add_executable(overview Projects/varAndData/overview.c)
add_executable(perimeterAndArea Projects/varAndData/areaRectangle.c)

add_executable(overviewOperators Projects/operators/ovwOperators.c)
add_executable(minutesToDaysAndYears Projects/operators/minutesToDaysAndYears.c)

add_executable(pointersBasics Projects/Pointers/pointersBasics.c)
add_executable(pointerArrays Projects/Pointers/pointers&Arrays.c)