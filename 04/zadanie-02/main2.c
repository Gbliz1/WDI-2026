int main(void) {
    char imie[50];
    int i;
    printf("Podaj imie: ");
    scanf("%49s", imie);

    if (imie[0] >= 'a' && imie[0] <= 'z') {
        imie[0] = imie[0] - 32;
    }

    for (i = 1; imie[i] != '\0'; i++) {
        if (imie[i] >= 'A' && imie[i] <= 'Z') {
            imie[i] = imie[i] + 32;
        }
    }

    printf("Wynik: %s\n", imie);

    return 0;
}
