#include <stdio.h>

float zad10()
{
    int tab[5];
    int licznik=0;
    int suma=0;
    int i;
    float avg;
    printf("Podaj 5 ocen\n");
    for (i=0;i<5;i++) {
        scanf("%d",&tab[i]);
        suma+=tab[i];
        if (tab[i]==2) {
            licznik++;
        }
    }
    printf("Liczba ocen ndost %d\n",licznik);
    avg=(float)suma/5;
    return avg;
}

int main() {
    float srednia = zad10();
    printf("Srednia ocen wynosi: %.2f\n", srednia);
    
    return 0;
}
