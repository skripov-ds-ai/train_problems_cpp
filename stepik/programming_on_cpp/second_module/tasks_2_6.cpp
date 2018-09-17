//
// Created by nizhikebinesi on 17.09.18.
//
#include <algorithm>
#include <iostream>

char *resize(const char *str, unsigned size, unsigned new_size) {
    char *new_str = new char[new_size];
    for (unsigned i = 0; i < std::min(size, new_size); i++) {
        new_str[i] = str[i];
    }
    delete[] str;
    return new_str;
}

char *getline() {
    char c;
    unsigned size(1);
    char* s = new char[size];
    unsigned i(0);
    while (std::cin.get(c) && c != '\n' && c != std::cin.eof()) {
        if (i == size) {
            unsigned new_size = 2 * size;
            s = resize(s, size, new_size);
            size = new_size;
        }
        s[i++] = c;
    }
    return s;
}
