#include <stdio.h>

int zad12() {
    int liczba;
    int i;
    int suma=0;
    printf("Podaj liczbe\n");
    scanf("%d",&liczba);
    for (i=1;i<liczba;i++) {
        suma+=i;
    }
    return suma;
}

int main() {
    int wynik = zad12();
    printf("Suma liczb mniejszych od podanej wynosi: %d\n", wynik);
    
    return 0;
}
