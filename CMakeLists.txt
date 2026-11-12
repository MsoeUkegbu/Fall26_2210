cmake_minimum_required(VERSION 4.0)
project(Fall26_Prep)

set(CMAKE_CXX_STANDARD 20)

add_executable(Fall26_Prep_week1 week1/main.cpp
        week6/BankAccount.cpp
        week6/BankAccount.h
)
add_executable(Fall26_Prep_week2 week2/Cin_Stuff.cpp
        week2/Input_val_eg.cpp
        week2/Simple_examples.cpp)

add_executable(Week6 week6/BankAccount.cpp week6/BankAccount.h
        week6/Driver.cpp)
add_executable(Week6_HW week6_Homework/LibraryCard.cpp week6_Homework/LibraryCard.h
        week6_Homework/DriverClass.cpp)

add_executable(pointers week7/week7_pointers/pointer_demo.cpp)

add_executable(Smart_Pointers week8/SmartPointers.cpp week8/SmartPointers.h week8/SmartPointer_Driver
        week8/SmartPointer_Driver.cpp)

add_executable(week9 "week 9/Character.cpp" "week 9/Character.h")
add_executable(week10 "week 10/Polymorph.cpp")
add_executable(Templates week11/Templates.cpp)
add_executable(Op_Load week11/Operator_over.cpp)
add_executable(Big_T week11/Big-three.cpp)
