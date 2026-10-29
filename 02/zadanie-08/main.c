int max(a,b) {
    return (a > b) ? a : b;
}
int min(a,b) {
    return (a < b) ? a : b;
}
int main(void) {
    int x,y;
  
    printf("Podaj dwie liczby\n");
    scanf("%d %d", &x, &y);
    printf("Mniejsza to %d\n", min(x,y));
    printf("Podaj dwie liczby\n");
    scanf("%d %d", &x, &y);
    printf("Wieksza to %d\n", max(x,y));
  
    return 0;
}
