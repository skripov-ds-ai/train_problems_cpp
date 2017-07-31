//
// Created by nizhikebinesi on 7/27/17.
//

#include <bits/stdc++.h>

using namespace std;

#define READ1 "%d %d"
#define READ2 "%d"
#define READ3 "%d %d:%d"
#define ANSWER "%02d:%02d\n"
#define LAST_TIME_INDEX (n - 1)
#define TO_DOUBLE 1.0
#define HOURS_IN_DAY 24
#define MINUTES_IN_HOUR 60
#define ONE_MINUTE 1
#define DEVIATION 0.1
#define EPS 1e-9

inline bool greater_or_equal(double a, double b) {
    return a > b || fabs(a - b) < EPS;
}

inline bool equal(double a, double b) {
    return fabs(a - b) < EPS;
}

inline void solve() {
    int v_max, d, n, counter = 0;
    scanf(READ1, &v_max, &d);
    scanf(READ2, &n);

    vector<int> x(n + 1, 0), t(n, 0), dx(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int h, m;
        scanf(READ3, &x[i + 1], &h, &m);
        t[i] = h * MINUTES_IN_HOUR + m;
        dx[i + 1] = x[i + 1] - x[i];
    }

    dx[0] = x[0];

    double wait = 0, time = 0, min = 0.0, max = t[LAST_TIME_INDEX];

    while (greater_or_equal(max - min, DEVIATION)) {
        wait = (max + min) / 2;
        time = wait;
        counter = 0;
        for (int i = 0; i < LAST_TIME_INDEX; i++) {
            time += (TO_DOUBLE * dx[i + 1]) / v_max;
            if (greater_or_equal(time, t[i])) {
                counter++;
                time += d;
            }
        }
        time += (TO_DOUBLE * dx[n]) / v_max;
        if (equal(time, t[LAST_TIME_INDEX])) {
            break;
        }
        if (time > t[LAST_TIME_INDEX]) {
            max = wait;
        } else {
            min = wait;
        }
    }

    time += (n - counter) * d + (TO_DOUBLE * x[n]) / v_max;

    int result = ((int) trunc(time + (ONE_MINUTE - DEVIATION))) % (HOURS_IN_DAY * MINUTES_IN_HOUR);

    printf(ANSWER, result / MINUTES_IN_HOUR, result % MINUTES_IN_HOUR);
}

/*int main() {
    solve();
}*/
