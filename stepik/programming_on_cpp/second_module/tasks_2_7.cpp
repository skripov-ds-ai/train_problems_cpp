//
// Created by nizhikebinesi on 18.09.18.
//

int ** transpose(const int * const * m, unsigned rows, unsigned cols) {
    int ** mt = new int *[cols];
    for (unsigned i = 0; i < cols; i++) {
        mt[i] = new int [rows];
        for (unsigned j = 0; j < rows; j++) {
            mt[i][j] = m[j][i];
        }
    }
    return mt;
}

void swap_min(int *m[], unsigned rows, unsigned cols) {
    unsigned index_min(0);
    int min(m[0][0]);
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j = 0; j < cols; j++) {
            if (min > m[i][j]) {
                index_min = i;
                min = m[i][j];
            }
        }
    }
    int * t = m[index_min];
    m[index_min] = m[0];
    m[0] = t;
}
