#include <stdio.h>

int zad7() {
    const unsigned granica = 20U;
    unsigned int wynik = 0U;
    unsigned int i;
    for (i = 1U; i <= granica; i++) {
        if (i % 3U == 0U) {
            wynik += i;
        }
    }

    return wynik;
}
int main() {
    unsigned int koncowy_wynik = zad7();
    printf("Wynik działania zad7 wynosi: %u\n", koncowy_wynik);

    return 0;
}
