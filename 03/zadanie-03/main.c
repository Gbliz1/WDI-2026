#include <stdio.h>

int floor(double x) {
    int i = (int)x;
    if (x < 0.0 && x != (double)i) {
        return i - 1;
    }
    return i;
}

int ceiling(double x) {
    int i = (int)x;
    if (x > 0.0 && x != (double)i) {
        return i + 1;
    }
    return i;
}

int round(double x) {
    int i = (int)x;
    double licz = (x - i);
    if (x > 0.0 && licz >= 0.5) {
        return i + 1;
    } else if (x < 0.0 && licz <= -0.5) {
        return i - 1;
    }
    return i;
}

int main(void) {
    double a = 4.3;

    printf("%d %d %d\n", floor(a), ceiling(a), round(a));

    return 0;
}
