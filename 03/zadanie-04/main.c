#include <stdio.h>

int suma_cyfr(int x) {
    if (x < 10) return x;
    return (x % 10) + suma_cyfr(x / 10);
}

int main(void) {
    int x;
    
    scanf("%d", &x);
    printf("%d\n", suma_cyfr(x));
    
    return 0;
}
