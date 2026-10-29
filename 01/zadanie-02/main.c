int main() {
    double liczba;
    printf("Podaj liczbe zmiennoprzecinkowa\n");
    scanf("%lf", &liczba);
    printf("1 miejsce %.1f\n", liczba);
    printf("3 miejsce %.3f\n", liczba);
    printf("5 miejsce %.5f\n", liczba);

    return 0;
}
