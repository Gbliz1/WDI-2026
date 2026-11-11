#include <stdio.h>

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

int main(void)
{
    int tablica[5];
    int i;
    double srednia;

    printf("Podaj 5 liczb calkowitych:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tablica[i]);
    }

    srednia = oblicz_srednia(tablica, 5);

    printf("\nSrednia wynosi: %.2f\n", srednia);
    printf("Elementy wieksze od sredniej:\n");

    for (i = 0; i < 5; i++)
    {
        if (tablica[i] > srednia)
        {
            printf("%d ", tablica[i]);
        }
    }
    printf("\n");

    return 0;
}
