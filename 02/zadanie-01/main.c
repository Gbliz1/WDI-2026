#include <limits.h>
#include <stdio.h>

int g_licz;
int g_suma;
int g_min = INT_MAX;
int g_max = INT_MIN;
float g_srednia;

int prog1() {
    g_licz = 0;
    g_suma = 0;
    g_min = INT_MAX;
    g_max = INT_MIN;

    int podaj;
    do {
        scanf("%d", &podaj);
        g_suma += podaj;
        g_licz++;
        if (podaj < g_min) {
            g_min = podaj;
        }
        if (podaj > g_max) {
            g_max = podaj;
        }
    } while (podaj % 2 != 0);

    if (g_licz > 0) {
        g_srednia = (float)g_suma / g_licz;
    } else {
        g_srednia = 0.0f;
    }

    return 0;
}

int prog2() {
    g_licz = 0;
    g_suma = 0;
    g_min = INT_MAX;
    g_max = INT_MIN;

    int podaj;
    do {
        scanf("%d", &podaj);
        g_suma += podaj;
        g_licz++;
        if (podaj < g_min) {
            g_min = podaj;
        }
        if (podaj > g_max) {
            g_max = podaj;
        }
    } while (podaj % 2 == 0);

    if (g_licz > 0) {
        g_srednia = (float)g_suma / g_licz;
    } else {
        g_srednia = 0.0f;
    }

    return 0;
}

int prog3() {
    g_licz = 0;
    g_suma = 0;
    g_min = INT_MAX;
    g_max = INT_MIN;

    int podaj;
    do {
        scanf("%d", &podaj);
        g_suma += podaj;
        g_licz++;
        if (podaj < g_min) {
            g_min = podaj;
        }
        if (podaj > g_max) {
            g_max = podaj;
        }
    } while (podaj != 0);

    if (g_licz > 0) {
        g_srednia = (float)g_suma / g_licz;
    } else {
        g_srednia = 0.0f;
    }

    return 0;
}

int main(void) {
    // - WYwolywanie 
    // prog1();
    // prog2();
    prog3();
    printf("Suma: %d\n", g_suma);
    printf("Min: %d\n", g_min);
    printf("Max: %d\n", g_max);
    printf("Srednia: %.2f\n", g_srednia);

    return 0;
}
