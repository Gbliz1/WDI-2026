#include <stdio.h>
#include <stdbool.h>

bool fifo_push(int tab[], int *size, int MAX_SIZE, int var) {
    MAX_SIZE = 10;
    int i;
    if (*size >= MAX_SIZE) {
        return false;
    }
    tab[*size] = var;
    (*size)++;
    printf("Tablica: ");
    for (i = 0; i < *size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return true;
}

bool fifo_pop(int tab[], int *size) {
    int i;
    if (*size <= 0) {
        return false;
    }

    for (i = 0; i < *size - 1; i++) {
        tab[i] = tab[i+1];
    }
    (*size)--;
    printf("Tablica: ");
    for (i = 0; i<*size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return true;
}
bool lifo_push(int tab[], int *size, int MAX_SIZE, int var) {
    int i;
    if (*size >= MAX_SIZE) {
        return false;
    }
    tab[*size] = var;
    (*size)++;

    printf("Tablica: ");
    for (i = 0; i < *size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return true;
}
bool lifo_pop(int tab[], int *size) {
    int i;
    if (*size <= 0) {
        return false;
    }
    (*size)--;
    printf("Tablica: ");
    for (i = 0; i < *size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return true;
}
int main(void) {
    int size=9;
    int tab[10]={1,2,3,4,5,6,7,8,9,10};
    // printf("%d\n",fifo_pop(tab,&size));
    // printf("%d\n",lifo_push(tab,&size,10,0));
    return 0;
}
