#include <stdio.h>

float zad8()
{
    int a, b;
    float wynik;
    char dzialanie;
    printf("Podaj dwie liczby:\n");
    scanf("%d %d", &a, &b);
    printf("Podaj dzialanie (+ - * / %%):\n");
    scanf(" %c", &dzialanie);

    if (dzialanie == '/')
    {
        if (b != 0)
        {
            wynik = (float)a / b;
        }
        else
        {
            printf("Nie mozna dzielic przez 0\n");
            return 0;
        }
    }
    else if (dzialanie == '+')
    {
        wynik = a + b;
    }
    else if (dzialanie == '-')
    {
        wynik = a - b;
    }
    else if (dzialanie == '*')
    {
        wynik = a * b;
    }
    else if (dzialanie == '%')
    {
        if (b != 0)
            wynik = a % b;
        else
        {
            printf("Nie mozna wykonac modulo przez 0\n");
            return 0;
        }
    }
    else
    {
        printf("Nieznane dzialanie\n");
            return 0;
    }
    printf("Wynik = %.2f\n", wynik);
    return wynik;
}

int main() {
    float zwrocona_wartosc = zad8();
    
    return 0;
}
