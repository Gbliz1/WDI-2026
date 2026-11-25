#include <stdio.h>

char szyfr_cezara(char litera,int klucz) {
    int helper;
    helper = (int)litera + klucz;
    return (char)helper;
}

char deszyfr_cezara(char litera,int klucz) {
    int helper;
    helper = (int)litera - klucz;
    return (char)helper;
}

int main(void) {
    int menu;
    int i,n,klucz_sz;
    printf("Wybierz opcje: 1 - zaszyfruj, 2 - deszyfruj\n");
    scanf("%d", &menu);
    printf("Wpisz klucz\n");
    scanf("%d", &klucz_sz);
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
                tablica[i] = szyfr_cezara(tablica[i],klucz_sz);
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
                tablica1[i] = deszyfr_cezara(tablica1[i],klucz_sz);
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
