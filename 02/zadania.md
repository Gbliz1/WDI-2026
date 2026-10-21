# 02 — Pętle i funkcje

> Zadania z rozdziału 4 — Pętle

1. Napisz programy, które wczytują liczby do momentu wpisania przez użytkownika liczby o własnościach poniżej, a następnie ich największą, najmniejszą, sumę i średnią:
	1. parzystej
	1. nieparzystej
	1. 0

2. Dla podanego `n` z zakresu 1–100 oblicz `1*1 + 2*2 + ... + n*n` za pomocą pętli `for`. Odrzuć liczbę spoza zakresu.

> Zadania z rozdziału 5 — Instrukcja wyboru switch case

3. Zaimplementuj kalkulator, w którym użytkownik podaje 2 liczby, następnie podaje znak działania jakie chce wykonać (+, -, \*, /, %). Wykorzystaj instrukcję _switch case_. Program wykonuje działanie i wyświetla wynik.

4. Zaimplementuj kalkulator 2 liczb z menu. W opcjach menu zawrzyj: zmianę pierwszej liczby, zmianę drugiej liczby, wybór działania do wykonania (+, -, \*, /, %) oraz zakończenie programu. Po każdorazowej zmianie danych program oblicza zadane działanie i wyświetla je powyżej menu, oraz daje możliwość dalszego korzystania z programu.

5. Przy pomocy instrukcji _switch case_ utwórz program, który wyświetla uprawnienia członków królestwa. Dodatkowo każdy z członków królestwa może również wykonywać rzeczy przeznaczone dla niższego rangą mieszkańca.
    1. Poddany - może czcić Króla,
    2. Giermek - może wchodzić na dziedziniec zamkowy codziennie,
    3. Rycerz - może wchodzić do zamku codziennie oraz rekrutować giermków,
    4. Mag - może rozmawiać z Królem,
    5. Królowa - może rozkazywać Królowi

_Przykład działania_
>Wybierz klasę społeczną: R
>
>Rycerz może: czcic Króla, wchodzić na dziedziniec zamkowy codziennie, wchodzic do zamku codziennie oraz rekrutowac giermkow.

6. Wczytaj numer miesiąca 1–12 i wypisz numer kwartału. Zgrupuj etykiety `case` dla trzech miesięcy; dla innych liczb wypisz komunikat o błędzie.

> Zadania z rozdziału 6 — Więcej o typach zmiennych

7. Zadeklaruj stałą `const unsigned granica = 20U`. Oblicz sumę liczb od 1 do `granica`, które dzielą się przez 3, i wypisz wynik jako liczbę bez znaku. Nie zmieniaj wartości `granica`.

> Zadania z rozdziału 7 — Pierwsze własne funkcje i rekurencja

8. Zaimplementuj funkcje max(a,b) i min(a,b), które będą zwracać odpowiednio większą i mniejszą z podanych liczb.

9. Zaimplementuj funkcję silnia(a), która będzie iteracyjnie (przy pomocy pętli) liczyć wartość silni z podanej liczby.

10. Zaimplementuj funkcję `potega(liczba, wykladnik)`, która będzie iteracyjnie liczyć wartość potęgi o podanych parametrach.

11. Zaimplementuj funkcję `potega(liczba, wykladnik)`, która będzie rekurencyjnie liczyć wartość potęgi o podanych parametrach.

12. Korzystając z własnych funkcji zaimplementuj kalkulator z menu dający możliwość wykonania obliczeń podanych poniżej. Każda z operacji powinna być wykonywana przez osobną funkcję/procedurę.
	1. dodawanie n liczb;
	2. odejmowanie od liczby aż do momentu podania '0';
	3. mnożenie dwóch liczb;
	4. dzielenie liczby;
	5. potęgowanie;
	6. kwadrat liczby;
	7. silnia;

13. Zaimplementuj funkcję liczącą wartość n-tego wyrazu [Ciągu Fibonacciego](https://pl.wikipedia.org/wiki/Ci%C4%85g_Fibonacciego)
