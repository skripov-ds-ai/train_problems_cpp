cmake_minimum_required(VERSION 3.8)
project(train_problems_cpp)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp informatics/binary_search/binary_search_with_answer/task_B.cpp informatics/binary_search/binary_search_with_answer/task_C.cpp informatics/binary_search/binary_search_with_answer/task_E.cpp informatics/quadratic_sortings/task_A.cpp informatics/quadratic_sortings/task_B.cpp informatics/quadratic_sortings/task_E.cpp informatics/quadratic_sortings/task_C.cpp)
add_executable(train_problems_cpp ${SOURCE_FILES})