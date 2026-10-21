# 06 — Macierze i struktury

> Zadania z rozdziału 10 — Tablice wielowymiarowe statyczne

1. Napisz funkcję wykonującą program mnożenia dwóch macierzy (mnożenie Cauch'ego). Jeżeli mnożenie nie jest możliwe funkcja zwraca -1, jeżeli możliwe zwraca 0 i wykonuje obliczenia do macierzy wynikowej. Wykorzystaj funkcje wczytywania i wypisywania macierzy z zadania 9 w zestawie 5 i zaimplementuj funkcjonalny klalkulator macierzy (max rozmiar 6x6).

2. Wczytaj dziewięć liczb całkowitych do tablicy `3x3`, a potem wypisz jej transpozycję. Element `tablica[i][j]` ma pojawić się na pozycji `j,i`.

> Zadania z rozdziału 11 — Zmienne złożone: struktury i unie

3. Zdefiniuj strukturę punktu o całkowitych współrzędnych `x` i `y`. Wczytaj dwa punkty o współrzędnych od `-1000` do `1000` i oblicz ich odległość miejską: `|x1-x2| + |y1-y2|`. Wykorzystaj funkcję przyjmującą dwie struktury.

4. Projekt: system ewidencji ligi piłkarskiej

   System przechowuje piłkarzy, drużyny, mecze i jedną ligę. Piłkarz ma imię, nazwisko, wiek i kategorię wiekową. Drużyna ma nazwę, kategorię i listę swoich piłkarzy. Mecz łączy dwie drużyny; może być zaplanowany, rozegrany albo odwołany. Liga gromadzi drużyny z jednej kategorii oraz ich mecze.

   Na potrzeby zadania przyjmij trzy kategorie: TRAMPKARZ (10–14 lat), JUNIOR (15–18 lat) i SENIOR (od 19 lat). Program ma obsługiwać najwyżej 20 piłkarzy, 4 drużyny i 6 meczów. W jednej drużynie może grać najwyżej 5 piłkarzy. Użyj tablic o stałym rozmiarze; nie jest tu potrzebna dynamiczna alokacja pamięci.

   Wykonuj kolejne etapy, rozbudowując ten sam program:

   1. Zdefiniuj typ wyliczeniowy kategorii wiekowych oraz struktury `pilkarz` i `druzyna`. Dodaj jednego piłkarza i jedną drużynę w kodzie, a następnie wypisz ich dane. Kategorię piłkarza ustalaj na podstawie wieku.
   2. Zdefiniuj strukturę `mecz` i typ wyliczeniowy jego stanu: ZAPLANOWANY, ROZEGRANY, ODWOLANY. W strukturze użyj unii, która przechowuje albo wynik meczu (liczbę goli obu drużyn), albo powód odwołania. Stan meczu określa, które pole unii należy odczytać. Utwórz po jednym przykładzie meczu rozegranego i odwołanego, a następnie wypisz właściwe dane.
   3. Dodaj menu do ewidencji piłkarzy: dodawanie, edycję i usuwanie. Nie przekraczaj limitu 20 osób. Piłkarza przypisanego do drużyny można usunąć dopiero po usunięciu go z tej drużyny.
   4. Dodaj tworzenie drużyn oraz dopisywanie i usuwanie piłkarzy z drużyny. Piłkarz może należeć do jednej drużyny i musi mieć tę samą kategorię wiekową co ona. Nie przekraczaj limitu 4 drużyn ani 5 piłkarzy w każdej z nich.
   5. Dodaj tworzenie meczu między dwiema różnymi drużynami, wpisanie jego wyniku oraz odwołanie z podaniem powodu. Po wpisaniu wyniku określ rezultat pierwszej drużyny za pomocą typu wyliczeniowego WYGRANA, PRZEGRANA, REMIS. Nie rozgrywaj ani nie odwołuj ponownie meczu, który ma już ustalony stan końcowy.
   6. Zdefiniuj strukturę `liga` i utwórz ligę dla jednej wybranej kategorii. Mogą do niej należeć tylko drużyny z tej kategorii. Utwórz po jednym meczu dla każdej pary drużyn, bez powtórzeń; przy 4 drużynach będzie ich 6. Wylosuj kolejność tych meczów za pomocą `rand()` z `<stdlib.h>`. Wyświetl listę meczów oraz wyniki rozegranych spotkań.

   W gotowym systemie użytkownik powinien móc kolejno dodać piłkarzy i drużyny, przypisać piłkarzy do drużyn, utworzyć ligę, wygenerować mecze, rozstrzygnąć albo odwołać każdy mecz oraz obejrzeć terminarz i wyniki. Przy każdej operacji sprawdzaj limity tablic i zgodność kategorii wiekowych.
