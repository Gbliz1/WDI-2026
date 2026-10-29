int main() {
    int ranga;

    printf("Podaj range (1-5):\n 1 - Poddany\n 2 - Giermek\n 3 - Rycerz\n 4 - Mag\n 5 - Krolowa\n");
    scanf("%d", &ranga);

    switch (ranga) {
        case 5:
            printf("Moze rozkazywac Krolowi\n");
        case 4:
            printf("Moze rozmawiac z Krolem\n");
        case 3:
            printf("Moze wchodzic do zamku codziennie\n");
            printf("Moze rekrutowac giermkow\n");
        case 2:
            printf("Moze wchodzic na dziedziniec zamkowy codziennie\n");
        case 1:
            printf("Moze czcic Krola\n");
            break;
        default:
            printf("Niepoprawna ranga\n");
    }
    return 0;
}
