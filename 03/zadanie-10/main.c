#include <stdio.h>
void scal(int tab[], int lewy, int srodek, int prawy) {
    int i;
    int j;
    int k;
    int temp[10];
    int m;

    i = lewy;
    j = srodek + 1;
    k = 0;
    while (i <= srodek && j <= prawy) {
        if (tab[i] <= tab[j]) {
            temp[k] = tab[i];
            i++;
        } else {
            temp[k] = tab[j];
            j++;
        }
        k++;
    }
    while (i <= srodek) {
        temp[k] = tab[i];
        i++;
        k++;
    }
    while (j <= prawy) {
        temp[k] = tab[j];
        j++;
        k++;
    }
    for (m = 0; m < k; m++) {
        tab[lewy + m] = temp[m];
    }
}
void merge_sort(int tab[], int lewy, int prawy) {
    int srodek;

    if (lewy < prawy) {
        srodek = lewy + (prawy - lewy) / 2;
        merge_sort(tab, lewy, srodek);
        merge_sort(tab, srodek + 1, prawy);
        scal(tab, lewy, srodek, prawy);
    }
}

int main(void) {
    int tab[10];
    int i;

    printf("Podaj 10 liczb do posortowania:\n");
    for (i = 0; i < 10; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    merge_sort(tab, 0, 9);

    printf("\nPosortowana tablica:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
