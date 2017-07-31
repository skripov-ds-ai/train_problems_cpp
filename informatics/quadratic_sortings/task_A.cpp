//
// Created by nizhikebinesi on 7/31/17.
//

#include <bits/stdc++.h>

#define SPACE " "
#define NL '\n'

using namespace std;

inline size_t search1(vector<int> &v) {
    size_t index = 0;
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] > v[index]) {
            index = i;
        }
    }
    return index;
}

inline size_t search2(vector<int> &v, int x) {
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            return i;
        }
    }
}

inline void fast_iostream() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

template <typename T>
void swap1(T& a, T& b) {
    T t(a);
    a = b;
    b = t;
}

inline void solve() {
    fast_iostream();

    size_t n;
    cin >> n;

    vector<int> v(n, 0);

    for (size_t i = 0; i < n; i++) {
        cin >> v[i];
    }

    swap1(v[0], v[search2(v, v[search1(v)])]);

    for (int i = 0; i < n; i++) {
        cout << v[i] << SPACE;
    }
    cout << NL;
}