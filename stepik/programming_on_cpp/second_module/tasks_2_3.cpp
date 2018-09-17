//
// Created by nizhikebinesi on 17.09.18.
//

inline void reverse(int a[], int first, int second) {
    int size = second - first;
    for (int i = 0; i < (size + 1) / 2; i++) {
        int t;
        t = a[first + i];
        a[first + i] = a[first + size - i];
        a[first + size - i] = t;
    }
}

inline void rotate(int a[], unsigned size, int shift) {
    shift %= size;
    if (shift == 0) {
        return;
    }
    reverse(a, 0, shift - 1);
    reverse(a, shift, size - 1);
    reverse(a, 0, size - 1);
}