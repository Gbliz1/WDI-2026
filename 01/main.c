#include <stdio.h>

int zad1();
int zad2();
int zad3();
int zad4();
float zad5();
int zad6();
int zad7();
float zad8();
int zad9();
float zad10();
int zad11();
int zad12();
float zad13();
int main() {

    // printf("--- Uruchamiam Zadanie 1 ---\n");
    // zad1();

    // printf("\n Zadanie 5\n");
    // printf("%f",zad5());
    // printf("\n Zadanie 5\n");
    // printf("%f",zad5());

    // printf("%f",zad10());
    // zad11();
    // printf("%d",zad12());
    zad13();
    return 0;
}

int zad1() {
    int wiek = 0;

    printf("Hej, ile masz lat?\n");
    scanf("%d", &wiek);
    printf("masz %d lat\n", wiek);

    return 0;
}

int zad2() {
    double liczba;
    printf("Podaj liczbe zmiennoprzecinkowa\n");
    scanf("%lf", &liczba);
    printf("1 miejsce %.1f\n", liczba);
    printf("3 miejsce %.3f\n", liczba);
    printf("5 miejsce %.5f\n", liczba);

    return 0;
}

int zad3()
{
    char litera;
    int wiek;
    printf("Podaj 1. litere imienia\n");
    scanf("%c",&litera);
    printf("Podaj wiek\n");
    scanf("%d",&wiek);
    printf("Inicjal: %c wiek:%d",litera,wiek);

    return 0;
}

int zad4()
{
    int a,b,c,suma,roznica=0,iloczyn=0,iloraz=0;
    printf("Podaj wartosci liczb\n");
    scanf("%d %d %d",&a,&b,&c);
    suma=a+b+c;
    roznica=a-b;
    iloczyn=a*c;
    iloraz=c/a;
    printf("Suma to: %d\n, roznica to: %d\n, iloczyn to %d\n, iloraz to %d\n",suma,roznica,iloczyn,iloraz);

    return 0;
}

float zad5()
{
    int a,b,c,d,e;
    float avg;
    printf("Podaj 5 ocen\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d, &e);
    avg=(float)(a+b+c+d+e)/5;
    return avg;
}

int zad6() {
    int sekunda;
    int godzina;
    int minuta;
    printf("Podaj liczbe sekund\n");
    scanf("%d",&sekunda);
    if (sekunda<0) {
        return 0;
    }
    else
    {
        godzina = sekunda / 3600;
        sekunda = sekunda % 3600;
        minuta = sekunda / 60;
        sekunda = sekunda % 60;
        printf("%d h %d min %d s",godzina,minuta,sekunda);
    }
    return 0;
}

int zad7()
{
    int l1, l2;
    printf("Podaj dwie liczby:\n");
    scanf("%d %d", &l1, &l2);

    if (l1 > l2)
    {
        printf("Wieksza: %d\n", l1);
        printf("Mniejsza: %d\n", l2);
        printf("%d > %d\n", l1, l2);
    }
    else if (l1 < l2)
    {
        printf("Wieksza: %d\n", l2);
        printf("Mniejsza: %d\n", l1);
        printf("%d < %d\n", l1, l2);
    }
    else
    {
        printf("Wieksza: %d\n", l1);
        printf("Mniejsza: %d\n", l1);
        printf("%d = %d\n", l1, l2);
    }
    return 0;
}

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

int zad9() {
    int a,b;
    printf("Podaj dwie liczby:\n");
    scanf("%d %d", &a, &b);
    if (b==0) {
        printf("Nie mozna dzielic przez 0\n");
        return 1;
    } else {
        if ((a%b)==0) {
            printf("Liczba %d jest dzielnikiem liczby %d",b,a);
            return 0;
        }else {
            printf("Liczba %d NIE jest dzielnikiem liczby %d",b,a);
        }
    }
}

float zad10()
{
    int tab[5];
    int licznik=0;
    int suma=0;
    int i;
    float avg;
    printf("Podaj 5 ocen\n");
    for (i=0;i<5;i++) {
        scanf("%d",&tab[i]);
        suma+=tab[i];
        if (tab[i]==2) {
            licznik++;
        }
    }
    printf("Liczba ocen ndost %d\n",licznik);
    avg=(float)suma/5;
    return avg;
}
int zad11()
{
    int liczba;
    printf("Podaj liczbe\n");
    scanf("%d",&liczba);
    if (liczba>0&&liczba%2==0) {
        printf("Liczba jest dodatnia i parzysta");
    }else {
        printf("Liczba NIE jest dodatnia i parzysta");
    }
    return 0;
}
int zad12() {
    int liczba;
    int i;
    int suma=0;
    printf("Podaj liczbe\n");
    scanf("%d",&liczba);
    for (i=1;i<liczba;i++) {
        suma+=i;
    }
    return suma;
}
float zad13() {
    int liczba;
    int i;
    int suma=0;
    float avg;
    printf("Podaj liczbe\n");
    scanf("%d",&liczba);
    int tab[liczba];
    printf("Podaj liczby\n");
    for (i=0;i<liczba;i++) {
        scanf("%d",&tab[i]);
        suma+=tab[i];
    }
    printf("Suma liczb %d\n",suma);
    avg=(float)suma/liczba;
    printf("Srednia liczb %f\n",avg);
    return 0;
}