#include <stdio.h>

int main() {
    int a, b;
    char dzialanie;
    int wynik = 0;
    
    printf("Podaj dwie liczby i dzialanie, ktore chcesz wykonac (np. 5 3 +): \n");
    scanf("%d %d %c", &a, &b, &dzialanie);
    
    switch (dzialanie) {
        case '+':
            wynik = a + b;
            break;
        case '-':
            wynik = a - b;
            break;
        case '/':
            if (b != 0) {
                wynik = a / b;
            } else {
                printf("Nie mozna dzielic przez 0!\n");
                return 1;
            }
            break;
        case '*':
            wynik = a * b;
            break;
        case '%':
            if (b != 0) {
                wynik = a % b;
            } else {
                printf("Nie mozna dzielic przez 0!\n");
                return 1;
            }
            break;
        default:
            printf("Nie ma takiego znaku\n");
            return 1;
    }
    printf("Wynik = %d\n", wynik);
    return 0;
}
