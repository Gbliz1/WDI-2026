#include <stdio.h>

int main(void) {
    char tekst[50];
    int i = 0;
    int liczba = 0;
    int znak = 1;

    printf("Podaj liczbe: ");
    scanf("%49s", tekst);

    if (tekst[0] == 45) {
        znak = -1;
        i = 1;
    }
    else if (tekst[0]==43) {
        i = 1;
    }

    if (tekst[i] == '\0') {
        printf("To nie jest liczba calkowita!\n");
        return 0;
    }

    while (tekst[i] != '\0') {
        if (tekst[i] < 48 || tekst[i] > 57) {
            printf("Blad! Znak '%c' nie jest cyfra.\n", tekst[i]);
            return 0;
        }
        liczba = liczba * 10 + (tekst[i] - 48);
        i++;
    }
    liczba = liczba * znak;

    printf("Przekonwertowana liczba to: %d\n", liczba);

    return 0;
}
