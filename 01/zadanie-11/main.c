int main()
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
