int main()
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
