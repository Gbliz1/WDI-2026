int main() {
    int miesiac;
    printf("Podaj numer miesiaca\n");
    scanf("%d", &miesiac);
    switch (miesiac) {
        case 1:
        case 2:
        case 3:
            printf("I kwartal");
            break;
        case 4:
        case 5:
        case 6:
            printf("II kwartal");
            break;
        case 7:
        case 8:
        case 9:
            printf("III kwartal");
            break;
        case 10:
        case 11:
        case 12:
            printf("IV kwartal");
            break;
        default:
            printf("Nie ma takiego miesiaca!\n");
    }
    return 0;
}
