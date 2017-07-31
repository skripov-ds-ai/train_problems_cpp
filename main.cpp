#include <iostream>
#include <ctime>
#include <algorithm>

// #include "informatics/binary_search/binary_search_with_answer/task_B.cpp"
// #include "informatics/binary_search/binary_search_with_answer/task_C.cpp"
// #include "informatics/quadratic_sortings/task_A.cpp"
// #include "informatics/quadratic_sortings/task_C.cpp"
// #include "informatics/quadratic_sortings/task_E.cpp"
#include "informatics/quadratic_sortings/task_F.cpp"

#define TIME_IN_SECONDS "time = %0.9f s.\n"

#define DOUBLE_ZERO 0.0
#define MILLISECONS_IN_SECOND 1000

inline double get_time_in_seconds(long start, long end) {
    return (end - start + DOUBLE_ZERO) / MILLISECONS_IN_SECOND;
}

using namespace std;

int main() {
    //std::cout << "Hello, World!" << std::endl;

    long start = clock();

    solve();

    long end = clock();

    printf(TIME_IN_SECONDS, get_time_in_seconds(start, end));

    return 0;
}