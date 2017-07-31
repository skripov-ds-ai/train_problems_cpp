//
// Created by nizhikebinesi on 7/28/17.
//

#include <bits/stdc++.h>

using namespace std;

#define LAST (n - 1)

inline void fast_iostream() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

inline void sync() {
    std::ios::sync_with_stdio(true);
}

inline void solve() {
    fast_iostream();

    size_t n;

    long long r, c, result = 0;

    cin >> n >> r >> c;

    size_t start = 0, end = 0;

    vector<long long> heights(n, 0);

    for (size_t i = 0; i < n; i++) {
        cin >> heights[i];
    }

    sort(heights.begin(), heights.end());

    

    sync();
}
