#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct statlitera {
    char alfabet;
    int number;
};

int main() {
    char slowo1[100];
    char slowo2[100];

    printf("Podaj pierwsze slowo: ");
    scanf("%s", slowo1);

    printf("Podaj drugie slowo: ");
    scanf("%s", slowo2);
    if (strlen(slowo1) != strlen(slowo2)) {
        printf("\nWynik: Nie, podane slowa nie sa anagramami (rozna dlugosc).\n");
        return 0;
    }

    struct statlitera tab1[26];
    struct statlitera tab2[26];
    for (int i = 0; i < 26; i++) {
        tab1[i].alfabet = 'a' + i;
        tab1[i].number = 0;
        
        tab2[i].alfabet = 'a' + i;
        tab2[i].number = 0;
    }
    for (int i = 0; slowo1[i] != '\0'; i++) {
        char znak = tolower(slowo1[i]);
        if (znak >= 'a' && znak <= 'z') {
            tab1[znak - 97].number++;
        }
    }
    for (int i = 0; slowo2[i] != '\0'; i++) {
        char znak = tolower(slowo2[i]);
        if (znak >= 'a' && znak <= 'z') {
            tab2[znak - 97].number++;
        }
    }
    int czyAnagramy = 1;
    for (int i = 0; i < 26; i++) {
        if (tab1[i].number != tab2[i].number) {
            czyAnagramy = 0;
            break;
        }
    }
    if (czyAnagramy) {
        printf("\nWynik: Tak, podane slowa sa anagramami!\n");
    } else {
        printf("\nWynik: Nie, podane slowa nie sa anagramami.\n");
    }

    return 0;
}
