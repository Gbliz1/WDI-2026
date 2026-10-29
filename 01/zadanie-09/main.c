#include <stdio.h>
int main() {
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
    return 0;
}
