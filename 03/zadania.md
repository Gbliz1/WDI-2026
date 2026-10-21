# 03 — Funkcje i tablice

> Zadania z rozdziału 7 — Pierwsze własne funkcje i rekurencja

1. Zaimplementuj funkcję liczącą sumę wszystkich wyrazów [Ciągu Fibonacciego](https://pl.wikipedia.org/wiki/Ci%C4%85g_Fibonacciego) kończąc na n-tym wyrazie.

2. Zaimplementuj funkcję liczącą wartość n-tego wyrazu ciągu określonego wzorem:

![image](https://user-images.githubusercontent.com/71324202/143841510-fa248fbc-8e7d-4395-af52-66133199df04.png)

3. Napisz funkcje ceiling, floor i round, odzwierciedlające funkcje matematyczne sufit i podłoga oraz zaokrąglenie matematyczne (skorzystaj z jawnej konwersji typów).

4. Napisz funkcję `suma_cyfr`, która rekurencyjnie sumuje cyfry nieujemnej liczby całkowitej. Dla `0` funkcja ma zwracać `0`. Przykład: `suma_cyfr(507) == 12`.

> Zadania z rozdziału 8 — Tablice jednowymiarowe

5. Zadeklaruj tablicę jednowymiarową wybranymi wartościami (w kodzie). A następnie wyświetl zawartość tej tablicy za pomocą pętli *for, while* i *do... while*, tworząc odpowiednie funkcje.
   1. od początku do końca tablicy,
   1. od końca do początku tablicy.

6. Wczytaj pięć liczb całkowitych do tablicy. Oblicz ich średnią w osobnej funkcji i wypisz elementy większe od tej średniej.

7. Napisz program, który wczytuje do tablicy 10 liczb podanych przez użytkownika, a następnie wykonuje wymienione czynności. Podziel program na funkcje, tak aby każdy podpunkt realizowała przynajmniej jedna osobna funkcja.
   1. podaje ich średnią arytmetyczną,
   1. wypisze wszystkie liczby większe od średniej,
   1. wypisze najmniejszą oraz największą liczbę,
   1. sumuje wszystkie elementy nieparzyste,
   1. wypisuje tablicę od ostatniego elementu.

8. Napisz program, który będzie na tablicy statycznej obsługiwał działanie kolejki:
	1. FIFO
	2. LIFO

9. Napisz program, który wczyta od użytkownika tablicę 10-cio elementową, a następnie posortuje ją algorytmem [sortowania bąbelkowego](https://pl.wikipedia.org/wiki/Sortowanie_b%C4%85belkowe). Zaimplementuj funkcję *bubble\_sort().*

10. Napisz program, który wczyta od użytkownika tablicę 10-cio elementową, a następnie posortuje ją algorytmem [merge sort](https://pl.wikipedia.org/wiki/Sortowanie_przez_scalanie). Zaimplementuj funkcję *merge\_sort().*
