#include <stdio.h>
int f_floor(double x) {
    int i = (int)x;
    if (x<0.0 && x != (double)i) {
        return i-1;
    }
    return i;
}
int f_ceilling(double x) {
    int i = (int)x;
    if (x>0.0 && x != (double)i) {
        return i+1;
    }
    return i;
}
int f_round(double x) {
    int i = (int)x;
    double licz = (x-i);
    if (x>0.0 && licz>=0.5) {
        return i+1;
    } else if (x<0.0 && licz<=-0.5) {
        return i-1;
    }
    return i;
}
