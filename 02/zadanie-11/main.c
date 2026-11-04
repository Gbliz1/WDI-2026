#include <stdio.h>
double wynik_globalny;
double potega(double liczba, int wykladnik) {
    if (wykladnik == 0) {
        return 1.0;
    }
    return liczba * potega(liczba, wykladnik - 1);
}
