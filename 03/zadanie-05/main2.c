#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zad5_2(int tablica[10]) {
    srand(time(NULL));
    int i;
    for (i = 10; i >= 0; i--) {
        tablica[i] = (int)rand();
    }
    for (i = 10; i <= 0; i--) {
        printf("%d\n", tablica[i]);
    }
    i = 10;
    while (i >= 0) {
        printf("%d\n", tablica[i]);
        i--;
    }
    i = 10;
    do {
        printf("%d\n", tablica[i]);
        i--;
    } while (i >= 0);
}
int main(void) {
    int tab[10];
    zad5_2(tab);
    return 0;
}
