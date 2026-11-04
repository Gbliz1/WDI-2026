#include <stdio.h>

double dodawanie_n(void);
double odejmowanie_do_zera(void);
double mnozenie_dch(void);
double dzielenie_liczby(void);
double potegowanie(void);
double kwadrat_liczby(void);
long silnia_funkcja(int n);

double dodawanie_n(void) {
    int n;
    int i;
    double suma;
    double liczba;

    suma = 0.0;
    printf("Ile liczb chcesz dodac? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Podaj liczbe %d: ", i + 1);
        scanf("%lf", &liczba);
        suma += liczba;
    }
    return suma;
}

double odejmowanie_do_zera(void) {
    double wynik;
    double liczba;

    printf("Podaj liczbe poczatkowa: ");
    scanf("%lf", &wynik);

    while (1) {
        printf("Podaj liczbe do odjecia (0 aby zakonczyc): ");
        scanf("%lf", &liczba);
        if (liczba == 0.0) {
            break;
        }
        wynik -= liczba;
    }
    return wynik;
}

double mnozenie_dch(void) {
    double a;
    double b;

    printf("Podaj dwie liczby do pomnozenia: ");
    scanf("%lf %lf", &a, &b);
    return a * b;
}
double dzielenie_liczby(void) {
    double a;
    double b;

    printf("Podaj dzielna i dzielnik: ");
    scanf("%lf %lf", &a, &b);

    if (b == 0.0) {
        printf("Blad: Dzielenie przez zero!\n");
        return 0.0;
    }
    return a / b;
}
double potegowanie(void) {
    double podstawa;
    int wykladnik;
    double wynik;
    int i;

    printf("Podaj podstawe oraz calkowity wykladnik: ");
    scanf("%lf %d", &podstawa, &wykladnik);

    wynik = 1.0;
    for (i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}
double kwadrat_liczby(void) {
    double liczba;

    printf("Podaj liczbe do podniesienia do kwadratu: ");
    scanf("%lf", &liczba);
    return liczba * liczba;
}
long silnia_funkcja(int n) {
    long wynik;
    int i;

    wynik = 1;
    for (i = 1; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}
int main(void) {
    int wybor;
    int n_silnia;
    double wynik_d;
    long wynik_l;

    do {
        printf("\n=========================\n");
        printf("    KALKULATOR MENU      \n");
        printf("=========================\n");
        printf("1. Dodawanie n liczb\n");
        printf("2. Odejmowanie od liczby az do podania '0'\n");
        printf("3. Mnozenie dwoch liczb\n");
        printf("4. Dzielenie liczby\n");
        printf("5. Potegowanie\n");
        printf("6. Kwadrat liczby\n");
        printf("7. Silnia\n");
        printf("0. Wyjscie\n");
        printf("Wybierz opcje: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                wynik_d = dodawanie_n();
                printf("Wynik dodawania: %.2f\n", wynik_d);
                break;
            case 2:
                wynik_d = odejmowanie_do_zera();
                printf("Wynik odejmowania: %.2f\n", wynik_d);
                break;
            case 3:
                wynik_d = mnozenie_dch();
                printf("Wynik mnozenia: %.2f\n", wynik_d);
                break;
            case 4:
                wynik_d = dzielenie_liczby();
                printf("Wynik dzielenia: %.2f\n", wynik_d);
                break;
            case 5:
                wynik_d = potegowanie();
                printf("Wynik potegowania: %.2f\n", wynik_d);
                break;
            case 6:
                wynik_d = kwadrat_liczby();
                printf("Kwadrat liczby: %.2f\n", wynik_d);
                break;
            case 7:
                printf("Podaj liczbe calkowita do silni: ");
                scanf("%d", &n_silnia);
                if (n_silnia < 0) {
                    printf("Silnia nie jest zdefiniowana dla liczb ujemnych!\n");
                } else {
                    wynik_l = silnia_funkcja(n_silnia);
                    printf("Silnia %d! = %ld\n", n_silnia, wynik_l);
                }
                break;
            case 0:
                printf("Koniec programu. Do widzenia!\n");
                break;
            default:
                printf("Nie ma takiej opcji w menu! Wybierz ponownie.\n");
        }
    } while (wybor != 0);

    return 0;
}
