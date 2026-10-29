#include <stdio.h>
float zad5()
{
    int a,b,c,d,e;
    float avg;
    printf("Podaj 5 ocen\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d, &e);
    avg=(float)(a+b+c+d+e)/5;
    return avg;
}

int main() {
    float wynik = zad5();
    printf("Średnia wynosi: %.2f\n", wynik);
    
    return 0;
}
