#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zad5_1(int tablica[10]) {
    srand(time(NULL));
    int i;
    for (i = 0; i < 10; i++) {
        tablica[i] = (int)rand();
    }
    for (i = 0; i < 10; i++) {
        printf("%d\n", tablica[i]);
    }
    i = 0;
    while (i < 10) {
        printf("%d\n", tablica[i]);
        i++;
    }
    i = 0;
    do {
        printf("%d\n", tablica[i]);
        i++;
    } while (i < 10);
    
    return 0;
}

int main(void) {
    int tab[10];
    zad5_1(tab);
    return 0;
}
