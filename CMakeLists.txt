cmake_minimum_required(VERSION 3.8)
project(train_problems_cpp)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp informatics/binary_search/binary_search_with_answer/task_B.cpp informatics/binary_search/binary_search_with_answer/task_C.cpp informatics/binary_search/binary_search_with_answer/task_E.cpp informatics/quadratic_sortings/task_A.cpp informatics/quadratic_sortings/task_B.cpp informatics/quadratic_sortings/task_E.cpp informatics/quadratic_sortings/task_C.cpp informatics/quadratic_sortings/task_F.cpp stepik/programming_on_cpp/second_module/tasks_2_3.cpp stepik/programming_on_cpp/second_module/tasks_2_4.cpp stepik/programming_on_cpp/second_module/tasks_2_6.cpp stepik/programming_on_cpp/second_module/tasks_2_7.cpp stepik/programming_on_cpp/third_module/tasks_3_3.cpp stepik/programming_on_cpp/third_module/tasks_3_5.cpp)
add_executable(train_problems_cpp ${SOURCE_FILES})