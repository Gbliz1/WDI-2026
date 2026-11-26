#include <stdio.h>
#include <string.h>

typedef enum {
    false = 0,
    true = 1
} bool;

bool czy_lustrzane(char l1[], char l2[]) {
    int i;
    int len1;
    int len2;

    len1 = strlen(l1);
    len2 = strlen(l2);
    if (len1 != len2) {
        return false;
    }
    for (i = 0; i < len1; i++) {
        if (l1[i] != l2[len1 - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main(void) {
    char l1[100];
    char l2[100];
    bool wynik;

    printf("Podaj liczbe 1. (max 99 znakow): ");
    scanf("%99s", l1);

    printf("Podaj liczbe 2. (max 99 znakow): ");
    scanf("%99s", l2);

    wynik = czy_lustrzane(l1, l2);

    if (wynik == true) {
        printf("Liczby sa lustrzane (true)\n");
    } else {
        printf("Liczby NIE sa lustrzane (false)\n");
    }

    return 0;
}
