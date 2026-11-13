#include <stdio.h>

void zamien_elem(int tablica[], int i1, int i2);
int wybierz_pkt_podzialu(int l, int r);
int podzieltablice(int tablica[], int l, int r);
void quick_sort(int tablica[], int l, int r);

void zamien_elem(int tablica[], int i1, int i2) {
    if (i1 != i2) {
        int aux = tablica[i1];
        tablica[i1] = tablica[i2];
        tablica[i2] = aux;
    }
}

int wybierz_pkt_podzialu(int l, int r) {
    return l + (r - l) / 2;
}
int podzieltablice(int tablica[], int l, int r) {
    int i;
    int indeksPodzialu = wybierz_pkt_podzialu(l, r);
    int wartoscPodzialu = tablica[indeksPodzialu];

    zamien_elem(tablica, indeksPodzialu, r);

    int aktualnaPozycja = l;
    for (i = l; i <= r - 1; i++) {
        if (tablica[i] < wartoscPodzialu) {
            zamien_elem(tablica, i, aktualnaPozycja);
            aktualnaPozycja++;
        }
    }

    zamien_elem(tablica, aktualnaPozycja, r);

    return aktualnaPozycja;
}

void quick_sort(int tablica[], int l, int r) {
    if (l < r) {
        int i = podzieltablice(tablica, l, r);
        quick_sort(tablica, l, i - 1);
        quick_sort(tablica, i + 1, r);
    }
}

int main(void) {
    int tab[10];
    int i;
    printf("Podaj 10 liczb do posortowania:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &tab[i]);
    }
    quick_sort(tab, 0, 9);

    printf("\nPosortowana tablica:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
