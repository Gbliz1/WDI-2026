int main()
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
