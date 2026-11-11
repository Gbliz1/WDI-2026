#include <stdio.h>
#include <limits.h>

double oblicz_srednia(const int tab[], int rozmiar)
{
    int i;
    int suma = 0;

    for (i = 0; i < rozmiar; i++)
    {
        suma += tab[i];
    }

    return (double)suma / rozmiar;
}

void wypisz_wieksze(const int tab[], int rozmiar, double srednia)
{
    int i;
    for (i = 0; i < rozmiar; i++)
    {
        if (tab[i] > srednia)
        {
            printf("%d ", tab[i]);
        }
    }
    printf("\n");
}

void wypisz_maks_min(const int tab[], int rozmiar) {
    int i;
    int min = INT_MAX;
    int max = INT_MIN;

    for (i = 0; i < rozmiar; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    printf("Najmniejsza liczba: %d\n", min);
    printf("Najwieksza liczba: %d\n", max);
}

int oblicz_suma_nieparzyste(const int tab[], int rozmiar)
{
    int i;
    int suma = 0;
    for (i = 0; i < rozmiar; i++) {
        if (tab[i] % 2 != 0) {
            suma += tab[i];
        }
    }
    return suma;
}

void wypisz_od_tylu(const int tab[], int rozmiar) {
    int i;
    for (i = rozmiar - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(void)
{
    int tablica[5];
    int i;
    double srednia;
    int suma_nieparzyste;
    printf("Podaj 5 liczb calkowitych:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tablica[i]);
    }
    printf("\n--- WYNIKI ---\n");
    srednia = oblicz_srednia(tablica, 5);
    printf("Srednia wynosi: %.2f\n", srednia);
    printf("Elementy wieksze od sredniej: ");
    wypisz_wieksze(tablica, 5, srednia);
    wypisz_maks_min(tablica, 5);
    suma_nieparzyste = oblicz_suma_nieparzyste(tablica, 5);
    printf("Suma liczb nieparzystych: %d\n", suma_nieparzyste);
    printf("Tablica od tylu: ");
    wypisz_od_tylu(tablica, 5);

    return 0;
}
