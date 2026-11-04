#include <stdio.h>

double potega(double liczba, int wykladnik) {
    double wynik;
    int i;
    wynik = 1.0;
    for (i = 0; i < wykladnik; i++) {
        wynik *= liczba;
    }

    return wynik;
}

int main(void) {
    double podstawa;
    int wykladnik;

    podstawa = 2.0;
    wykladnik = 3;

    printf("%.2f do potęgi %d wynosi: %.5f\n", podstawa, wykladnik, potega(podstawa, wykladnik));

    return 0;
}
