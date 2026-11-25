#include <stdio.h>

char szyfr_cezara_3(char litera) {
    int helper;
    helper = (int)litera + 3;
    return (char)helper;
}

char deszyfr_cezara_3(char litera) {
    int helper;
    helper = (int)litera - 3;
    return (char)helper;
}

int main(void) {
    int menu;
    int i, n;
    printf("Wybierz opcje: 1 - zaszyfruj, 2 - deszyfruj\n");
    scanf("%d", &menu);

    switch(menu) {
        case 1: {
            char tablica[100];

            printf("Podaj rozmiar tablicy (maks. 100):\n");
            scanf("%d", &n);
            if (n > 100) n = 100;

            for (i = 0; i < n; i++) {
                scanf(" %c", &tablica[i]);
            }
            for (i = 0; i < n; i++) {
                tablica[i] = szyfr_cezara_3(tablica[i]);
            }
            for (i = 0; i < n; i++) {
                printf("%c", tablica[i]);
            }
            printf("\n");
            break;
        }
        case 2: {
            char tablica1[100];

            printf("Podaj rozmiar tablicy (maks. 100):\n");
            scanf("%d", &n);
            if (n > 100) n = 100;

            for (i = 0; i < n; i++) {
                scanf(" %c", &tablica1[i]);
            }
            for (i = 0; i < n; i++) {
                tablica1[i] = deszyfr_cezara_3(tablica1[i]);
            }
            for (i = 0; i < n; i++) {
                printf("%c", tablica1[i]);
            }
            printf("\n");
            break;
        }
        default:
            printf("Wybierz prawidlowa opcje!\n");
            break;
    }
    return 0;
}
