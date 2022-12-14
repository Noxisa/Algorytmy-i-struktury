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
Przyjrzyj się temu sposobowi na przykładzie szukania

NWD liczb: a = 42 i b = 24.

![Screenshot 2022-11-29 112719](https://user-images.githubusercontent.com/115026224/204491136-b1d18c73-e9ed-45b4-a5fc-0fc6815b2fbe.png)


NWD liczb a i b wynosi więc 2 · 3 · 1 = 6.
Lepszym i szybszym rozwiązaniem problemu szukania NWD dwóch liczb całkowitych jest algorytm Euklidesa. To
jeden z najstarszych algorytmów, opisany przez Euklidesa ok. 300 roku p.n.e. Opiera się na spostrzeżeniu: jeśli od
większej liczby odejmiemy mniejszą, to mniejsza liczba i otrzymana różnica będą miały taki sam największy wspólny
dzielnik jak pierwotne liczby. Gdy w wyniku kolejnego odejmowania otrzymamy parę takich samych liczb, to oznacza,
że znaleźliśmy NWD.
Popatrz, jak przebiega znajdowanie NWD dwóch liczb a = 42 i b = 24 według tego algorytmu.

![Screenshot 2022-11-29 112732](https://user-images.githubusercontent.com/115026224/204491197-d580ad5c-ed4e-4d98-a2e5-6b03ea332e2b.png)



Oto algorytm Euklidesa zapisany w postaci planu działań.

1. Wybieramy dwie liczby naturalne.
2. Jeśli liczby są równe, to NWD jest np. pierwszą z nich i to oznacza koniec działań.
3. Jeśli liczby nie są sobie równe, to trzeba:
- zbadać, która jest większa;
- odjąć od niej mniejszą i zastąpić większą przez otrzymaną różnicę;
- wrócić do sprawdzenia warunku w punkcie 2. (pętla).

Pseudokod NWD
```
NWD(a, b)
{
  dzielnik = 0
  while (liczba2 != 0)
        {
        r = b
        b = a % b
        a = b
        }
  return b
}
```
Kod NWD
```
#include <stdio.h>

int NWD(int a,int  b, int r)
{
 int  dzielnik = 0;
  int liczba2;
  while ( liczba2 != 0)
        {
        r = b;
        b = a % b;
        a = b;
        }
  return b;
}
int main(void) {
  int a,b,r;
  int liczba2;
  printf("a = ");
  scanf("%d ", &a);
   printf("b = ");
  scanf("%d", &b);
  if(a>b){
  do{
    r = a%b;
    a = b;
    b = r;
    
  }
    while(b);
  printf("NWD = %d", a);
    }
  else{
      do{
        r = a;
        a = a % b;
        a = b;
        }
        
        while(a);
    printf("NWD = %d", b);
    }
  while ( liczba2 != 0)
        {
        r = b;
        b = b % a;
        b = a;
        }
  return 0;
}
```
