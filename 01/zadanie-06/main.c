int zad6() {
    int sekunda;
    int godzina;
    int minuta;
    printf("Podaj liczbe sekund\n");
    scanf("%d",&sekunda);
    if (sekunda<0) {
        return 0;
    }
    else
    {
        godzina = sekunda / 3600;
        sekunda = sekunda % 3600;
        minuta = sekunda / 60;
        sekunda = sekunda % 60;
        printf("%d h %d min %d s",godzina,minuta,sekunda);
    }
    return 0;
}
int main() {
    zad6();
    return 0;
}
