//
// Created by nizhikebinesi on 18.09.18.
//

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
    String(const char *str = "") : size(strlen(str)) {
        this->str = new char[size + 1];
        strcpy(this->str, str);
    }

    /* Реализуйте этот конструктор */
    String(size_t n, char c) : size(n), str(new char[size + 1]) {
        for (size_t i = 0; i < size; i++) {
            str[i] = c;
        }
        str[size] = 0;
    }

    /* и деструктор */
    ~String() {
        delete[] str;
        size = 0;
    }

    /* Реализуйте этот метод. */
    void append(String &other) {
        unsigned new_size = this->size + other.size;
        char * t = new char[new_size + 1];

        strcat(t, str);
        strcat(t, other.str);

        delete[] str;
        str = t;
        size = new_size;
    }

    size_t size;
    char *str;
};