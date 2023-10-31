cmake_minimum_required(VERSION 3.26)
project(StudentMangementSystem)

set(CMAKE_CXX_STANDARD 23)

add_executable(StudentMangementSystem main.cpp
        Student.cpp
        Student.h
        StudentController.cpp
        StudentController.h
        SubjectDefinition.cpp
        SubjectDefinition.h
        SubjectController.cpp
        SubjectController.h
        SubjectData.cpp
        SubjectData.h)
