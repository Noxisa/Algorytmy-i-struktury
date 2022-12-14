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


Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca

Algorytm Knutha-Morrisa-Pratta (lub w krótszym sposób algorytm KMP ) jest podciąg (znak) algorytm wyszukiwania, co pozwala na znalezienie wystąpienia ciągu znaków w tekście o liniowej złożoności w najgorszym przypadku. Jego specyfika polega na wstępnym przetwarzaniu ciągu, który dostarcza informacji wystarczających do określenia, gdzie kontynuować wyszukiwanie w przypadku niezgodności. W ten sposób algorytm nie sprawdza ponownie znaków, które były widziane wcześniej, a zatem ogranicza liczbę koniecznych porównań. PSO (| P | + | S |)

Algorytm został zaprojektowany w 1970 roku przez Knutha i Pratta  (in) oraz w innym kontekście przez Morrisa  (in) i wspólnie opublikowany w 1977 roku . Niezależnie Matiyasevich uzyskał już w 1969 r. podobny algorytm, zakodowany przez dwuwymiarową maszynę Turinga, badając problem rozpoznawania występowania strun.

Algorytm wyszukiwania

Zakłada istnienie tabeli podającej „częściowe dopasowania” (opisane poniżej), wskazującą, gdzie szukać potencjalnego początku następnego zdarzenia, w przypadku gdy weryfikacja obecnego potencjalnego wystąpienia się nie powiedzie. Na razie tę tablicę, oznaczoną przez, można traktować jako czarną skrzynkę z następującą właściwością: jeśli mamy częściowe dopasowanie do, ale nie powiedzie się podczas porównywania i, wtedy następne potencjalne wystąpienie zaczyna się od position . W szczególności istnieje i jest zdefiniowana w . Biorąc pod uwagę tę tabelę, algorytm jest stosunkowo prosty: TS [m]S [m+i-1]S [m+w]Liczba Pi]m + iT [i-1]T [-1]-1

Napraw . Załóżmy, że ma długość znaków oraz, znaków;ja = m = 0PnieSja
Jeśli, a następnie zakończ przetwarzanie, nie znaleziono dopasowania. W przeciwnym razie porównaj i  ; m + ja = lLiczba Pi]S [m+w]
Jeśli są równe, napraw . Jeśli, dopasowanie jest zakończone. Zakończenie przetwarzania i zwrot jako pozycja rozpoczęcia korespondencji;ja = ja + 1ja = nm
Jeśli są różne, napraw . Napraw, a jeśli napraw  ;e = T [i-1]m = m + ieja> 0ja = e
Kontynuować kroku n °  2.
Opis ten implementuje algorytm zastosowany w poprzednim przykładzie. Za każdym razem, gdy sprawdzenie się nie powiedzie, tabela jest sprawdzana w celu znalezienia początku następnego potencjalnego wystąpienia, a liczniki są odpowiednio aktualizowane. Dlatego sprawdzanie znaków nigdy nie jest wykonywane wstecz. W szczególności każdy znak jest sprawdzany tylko raz (chociaż mógłby zostać odrzucony kilka razy w wyniku nieudanego dopasowania. Zobacz poniżej analizę skuteczności algorytmu.

Przykładowy kod algorytmu wyszukiwania
Poniższy fragment kodu C jest implementacją tego algorytmu dla 8-bitowych ciągów znaków. Aby przezwyciężyć wewnętrzne ograniczenia tabel w C, indeksy są przesunięte o jedną jednostkę, to znaczy, że w kodzie są równoważne z powyższym opisem. T [i]T [i + 1]
```
int kmp_recherche(char *P, char *S)
{
    extern int T[];
    int m = 0;
    int i = 0;

    
    while (S[m + i] != '\0' && P[i] != '\0')
    {
        if (S[m + i] == P[i])
        {
                              
            ++i;              
        }
        else
        {
            // sinon
            m += i - T[i];    

            if (i > 0)
                i = T[i];    
                                 
        }
    }

    if (P[i] == '\0')
    {
        
        return m;
    }
    else
    {                    
        return m + i;    
    }
}
```

Wydajność algorytmu wyszukiwania

Zakładając wcześniejsze istnienie tablicy, faza „przeszukiwania” algorytmu Knutha-Morrisa-Pratta ma złożoność O, gdzie oznacza długość . Jeśli wykluczymy dodatkowe stałe przetwarzanie indukowane przez wejście i wyjście funkcji, całe przetwarzanie odbywa się w pętli głównej. Aby obliczyć limit liczby iteracji, konieczna jest pierwsza obserwacja dotycząca natury . Z definicji jest skonstruowany w taki sposób, że jeśli częściowe dopasowanie, które zaczyna się kończyć niepowodzeniem podczas porównywania i, następne potencjalne dopasowanie nie rozpoczyna się przed . W szczególności następne potencjalne dopasowanie musi znajdować się na pozycji większej niż, aby . T (l)jaSTS [m]S [m+w]Liczba Pi]S [m + (iT [i])]mT [i] <i

Na podstawie tego faktu pokazujemy, że pętla jest wykonywana najczęściej . W każdej iteracji wykonuje jedną z dwóch gałęzi instrukcji if . ja

Pierwsza gałąź niezmiennie rośnie i nie zmienia się, więc indeks aktualnie sprawdzanego znaku w ciągu jest zwiększany.imm + iS
Druga gałąź dodaje do . Jak widzieliśmy, zawsze jest pozytywne. W ten sposób zwiększa się pozycja początku bieżącego potencjalnego meczu.to [i]mto [i]m
Pętla kończy się if, co oznacza, że biorąc pod uwagę konwencję C określającą, że znak NUL oznacza koniec łańcucha, to . W konsekwencji, każda gałąź instrukcji if może być przemierzona w większości przypadków, ponieważ odpowiednio wzrastają lub, a więc if, then i ponieważ wzrost w każdej iteracji wynosi co najmniej jedną jednostkę, z konieczności zostało to sprawdzone w przeszłości. S [m + i] = '\  0'm + ja = llm + imm <= m + im = lm + i => lm + i = l

W ten sposób pętla jest wykonywana w większości przypadków, ustanawiając w ten sposób złożoność algorytmiczną w . 2l0(l)
