#include <stdio.h>
#include <ctype.h>

struct statlitera {
    char alfabet;
    int number;
};

int main() {
    int wartosc;
    int i;
    printf("Podaj ile znakow chcesz wpisac: ");
    scanf("%d", &wartosc);

    char slowo[wartosc];
    printf("Wpisz slowo: ");
    scanf("%s", slowo);

    struct statlitera tab[26];

    for (i = 0; i < 26; i++) {
        tab[i].alfabet = 'a' + i;
        tab[i].number = 0;
    }
    for (i = 0; i < wartosc; i++) {
        int znak = (int)slowo[i];

        if (znak >= 'A' && znak <= 'Z') {
            tab[znak-65].number++;
        }
        else if (znak >= 'a' && znak <= 'z') {
            tab[znak-97].number++;
        }
    }
    printf("\nWyniki:\n");
    for (i = 0; i < 26; i++) {
        if (tab[i].number > 0) {
            printf("Litera %c: %d\n", tab[i].alfabet, tab[i].number);
        }
    }
    return 0;
}
