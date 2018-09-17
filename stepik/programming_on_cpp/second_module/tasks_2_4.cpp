//
// Created by nizhikebinesi on 17.09.18.
//

unsigned strlen0(const char *str) {
    unsigned size = 0;
    while (str[size++] != 0);
    return size - 1;
}

void strcat0(char *to, const char *from) {
    unsigned ind(0), ind2(0);
    while (to[ind++] != 0);
    ind--;
    while (from[ind2] != 0) {
        to[ind++] = from[ind2++];
    }
    to[ind] = 0;
}

void strcat1(char* to, const char *from) {
    while (*to++);
    *to--;
    while (*to++ = *from++);
}

int strstr0(const char *text, const char *pattern) {
    unsigned size1 = strlen0(text), size2 = strlen0(pattern);

    if (size2 == 0) {
        return 0;
    }
    if (size2 > size1) {
        return -1;
    }


    bool ok;
    for (unsigned i = 0; i < size1; i++) {
        ok = true;
        if (i + size2 > size1) {
            return -1;
        }
        for (unsigned j = 0; j < size2; j++) {
            ok &= text[i + j] == pattern[j];
            if (!ok) {
                break;
            }
        }
        if (ok) {
            return i;
        }
    }
    return -1;
}