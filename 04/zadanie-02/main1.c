#include <stdio.h>
#include <ctype.h>

int main(void) {
    char imie[50];
    int i;
    printf("Podaj imie: ");
    scanf("%49s", imie);
    imie[0] = toupper(imie[0]);

    for (i = 1; imie[i] != '\0'; i++) {
        imie[i] = tolower(imie[i]);
    }

    printf("Wynik: %s\n", imie);

    return 0;
}
