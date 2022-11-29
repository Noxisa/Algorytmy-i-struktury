Algorytmy i struktury danych

Opis
 Algorytm Euklidesa. Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca. Algorytm dołączania nowego elementu do końca listy jednokierunkowej


Autor
Tomas Chmelevski Student 2 roku Informatyki

Zawartość
ALGORYTM EUKLIDESA
Algorytm Knutha-Morrisa-Pratta 
Wyszukiwania wzorca
Algorytm dołączania 
nowego elementu do końca listy jednokierunkowej

Literatura
Algorytmy i struktury danych, L. Banachowski, K. Diks, W. Rytter,Euklides z Aleksandrii, Knutha-Morrisa-Pratta

ALGORYTM EUKLIDESA

Algorytm opisuje sposób rozwiązania problemu krok po kroku. Opis ten powinien być dokładny i nie pozostawiać
wątpliwości, co, jak i w jakiej kolejności trzeba zrobić. Z algorytmami masz często do czynienia na lekcjach matematyki.
Jednym z przykładów algorytmu jest sposób znajdowania największego wspólnego dzielnika dwóch liczb całkowitych
(NWD). NWD jest potrzebny np. przy skracaniu ułamków.
Algorytmem poznanym przez ciebie na lekcjach matematyki jest sprawdzanie podzielności dwóch liczb całkowitych
przez kolejne liczby. Najpierw sprawdzamy podzielność przez 2, potem – przez 3 i tak dalej, aż do mniejszej z dwóch
liczb. Największym wspólnym dzielnikiem dwóch liczb jest iloczyn ich wszystkich wspólnych dzielników pierwszych.
Przyjrzyj się temu sposobowi na przykładzie szukania NWD liczb: a = 42 i b = 24.


NWD liczb a i b wynosi więc 2 · 3 · 1 = 6.
Lepszym i szybszym rozwiązaniem problemu szukania NWD dwóch liczb całkowitych jest algorytm Euklidesa. To
jeden z najstarszych algorytmów, opisany przez Euklidesa ok. 300 roku p.n.e. Opiera się na spostrzeżeniu: jeśli od
większej liczby odejmiemy mniejszą, to mniejsza liczba i otrzymana różnica będą miały taki sam największy wspólny
dzielnik jak pierwotne liczby. Gdy w wyniku kolejnego odejmowania otrzymamy parę takich samych liczb, to oznacza,
że znaleźliśmy NWD.
Popatrz, jak przebiega znajdowanie NWD dwóch liczb a = 42 i b = 24 według tego algorytmu.


Oto algorytm Euklidesa zapisany w postaci planu działań.

1. Wybieramy dwie liczby naturalne.
2. Jeśli liczby są równe, to NWD jest np. pierwszą z nich i to oznacza koniec działań.
3. Jeśli liczby nie są sobie równe, to trzeba:
- zbadać, która jest większa;
- odjąć od niej mniejszą i zastąpić większą przez otrzymaną różnicę;
- wrócić do sprawdzenia warunku w punkcie 2. (pętla).


