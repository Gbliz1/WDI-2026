#include <stdio.h>

long fibonacci_suma(int n) {
    long suma;
    long a;
    long b;
    long c;
    int i;

    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    suma = 1;
    a = 0;
    b = 1;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        suma += b;
    }

    return suma;
}

int main(void) {
    int n = 10;
    printf("%ld\n", fibonacci_suma(n));
    return 0;
}
