//
// Created by nizhikebinesi on 8/1/17.
//

#include <iostream>
#include <algorithm>
#include <vector>

#define SPACE " "
#define NL '\n'

using namespace std;

template <typename T>
void swap1(T& a, T& b) {
    T t(a);
    a = b;
    b = t;
}

inline void fast_iostream() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

inline void selection_sort(vector<int> &v) {
    size_t size = v.size();
    for (size_t i = 0; i < size - 1; i++) {
        size_t min_i = i;
        for (size_t j = i + 1; j < size; j++) {
            if (v[j] < v[min_i]) {
                min_i = j;
            }
        }
        if (min_i != i) {
            swap1(v[i], v[min_i]);
        }
    }
}

inline void solve() {
    fast_iostream();

    size_t n;
    cin >> n;

    vector<int> v(n, 0);

    for (size_t i = 0; i < n; i++) {
        cin >> v[i];
    }

    selection_sort(v);

    for (size_t i = 0; i < n; i++) {
        cout << v[i] << SPACE;
    }

    cout << NL;
}