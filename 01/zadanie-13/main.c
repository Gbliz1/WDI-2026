#include <stdio.h>

float zad13() {
    int liczba;
    int i;
    int suma=0;
    float avg;
    printf("Podaj liczbe\n");
    scanf("%d",&liczba);
    int tab[liczba];
    printf("Podaj liczby\n");
    for (i=0;i<liczba;i++) {
        scanf("%d",&tab[i]);
        suma+=tab[i];
    }
    printf("Suma liczb %d\n",suma);
    avg=(float)suma/liczba;
    printf("Srednia liczb %f\n",avg);
    return 0;
}

int main() {
    zad13();
    
    return 0;
}
