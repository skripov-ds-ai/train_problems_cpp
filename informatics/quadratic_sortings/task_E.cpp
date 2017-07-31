//
// Created by nizhikebinesi on 8/1/17.
//

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>

#define SPACE " "
#define NL '\n'

using namespace std;

inline void fast_iostream() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

template <typename RandomAccessIterator>
void bubble_sort(RandomAccessIterator first, RandomAccessIterator last) {
    bool swapped = true;
    while (first != last-- && swapped) {
        swapped = false;
        for (auto i = first; i != last; ++i) {
            if (*(i + 1) < *i) {
                std::iter_swap(i, i + 1);
                swapped = true;
            }
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

    bubble_sort(v.begin(), v.end());

    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << SPACE;
    }

    cout << NL;
}