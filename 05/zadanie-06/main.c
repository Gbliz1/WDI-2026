#include <stdio.h>
#include <stdlib.h>

int main() {
    int tablica[4][4],i,j,z,pomocnicza;
    printf("Wpisz wartosci do tablicy \n");
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            scanf("%d",&tablica[i][j]);
        }
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            for(z=0;z<4;z++) {
                if (tablica[i][j]>tablica[i][j+1]) {
                    pomocnicza=tablica[i][j];
                    tablica[i][j+1]=tablica[i][j];
                    tablica[i][j]=pomocnicza;
                }
            }
        }
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            printf("%d",tablica[i][j]);
        }
        printf("\n");
    }
    return 0;
}
