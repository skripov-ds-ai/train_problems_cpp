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

inline void solve() {
    fast_iostream();

    size_t n, index;
    int x;
    cin >> n;

    vector<int> v(n, 0);

    for (size_t i = 0; i < n; i++) {
        cin >> v[i];
    }

    cin >> x >> index;

    index--;

    v.insert(v.begin() + index, x);

    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << SPACE;
    }

    cout << NL;
}