#include <stdio.h>
#include <stdlib.h>

int g_tab[100];
int g_rozmiar = 0;

void tabl(int n) {
    if (n == 0) {
        if (g_rozmiar == 0) {
            g_tab[0] = 0;
            g_rozmiar = 1;
        }
        return;
    }
    if (n > 0) {
        tabl(n / 10);
        g_tab[g_rozmiar] = n % 10;
        g_rozmiar++;
    }
}

int main() {
    int var, i;
    printf("Podaj zmienna: ");
    scanf("%d", &var);
    tabl(var);
    char tablica[g_rozmiar > 0 ? g_rozmiar : 1];

    for(i = 0; i < g_rozmiar; i++) {
        tablica[i] = (char)(g_tab[i] + '0');
    }
    printf("\n");
    printf("Kody ASCII (dziesietnie): ");
    
    for (i = 1; i < g_rozmiar; i++) {
        printf("%d ", (int)tablica[i]);
    }
    printf("\n");

    return 0;
}
