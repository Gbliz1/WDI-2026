#include <stdio.h>

int funkcja_f(int x) {
    switch (x) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            return (funkcja_f(x-1)*funkcja_f(x-2))-funkcja_f(x-3);
    }
}

int main(void) {
    int x;
    scanf("%d",&x);
    printf("f(%d) = %d\n", x, funkcja_f(x));
    return 0;
}
