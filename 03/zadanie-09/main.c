#include <stdio.h>

void bubble_sort(int tab[], int rozmiar) {
    int i;
    int j;
    int pomocnicza;

    for (i = 0; i < rozmiar - 1; i++) {
        for (j = 0; j < rozmiar - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                pomocnicza = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = pomocnicza;
            }
        }
    }
}

int main(void) {
    int tab[10];
    int i;

    printf("Podaj 10 liczb:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &tab[i]);
    }
    bubble_sort(tab, 10);
    printf("\nPosortowana tablica:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
