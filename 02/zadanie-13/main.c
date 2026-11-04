#include <stdio.h>

long fibonacci_rekurencyjnie(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci_rekurencyjnie(n - 1) + fibonacci_rekurencyjnie(n - 2);
}

int main(void) {
    int n;

    printf("Podaj numer wyrazu ciagu Fibonacciego: ");
    scanf("%d", &n);

    printf("%d-ty wyraz ciagu Fibonacciego (rekurencyjnie) wynosi: %ld\n", n, fibonacci_rekurencyjnie(n));

    return 0;
}
