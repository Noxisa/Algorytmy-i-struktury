# Projekt z przedmiotu "Algorytmy i struktury danych"

### Autor
### Praca wykonał  Tomas Chmelevski Student 2 roku Informatyki
### Data: 2023.01.29

### Opis
 **Algorytm Euklidesa.Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca.Algorytm dołączania nowego elementu do końca listy jednokierunkowej**

### Zawartość
- [ALGORYTM EUKLIDESA](https://github.com/Noxisa/Algorytmy-i-struktury/blob/main/Projekty/Projekt.md#:~:text=ko%C5%84ca%20listy%20jednokierunkowej-,Algorytm%20Euklidesa,-Przyklad%20zastosowania%20algorytmu)
- [Algorytm Knutha-Morrisa-Pratta Wyszukiwania wzorca](https://github.com/Noxisa/Algorytmy-i-struktury/blob/main/Projekty/Projekt.md#:~:text=Code%20NWD-,Algorytm%20Knutha%2DMorrisa%2DPratta%20wyszukiwania%20wzorca,-Przyklad%20zastosowania%20algorytmu)
-  [Algorytm dołączania nowego elementu do końca listy jednokierunkowej](https://github.com/Noxisa/Algorytmy-i-struktury/blob/main/Projekty/Projekt.md#:~:text=Algorytm%20do%C5%82%C4%85czania%20nowego%20elementu%20do%20ko%C5%84ca%20listy%20jednokierunkowej.)


## Algorytm Euklidesa

### Przyklad zastosowania algorytmu euklidesa

**Algorytm Euklidesa jest udowodniony jako poprawny przez matematyków od wieków. Został po raz pierwszy opisany przez greckiego matematyka Euclidesa w III wieku p.n.e. i od tego czas jest uważany za poprawny i niezawodny sposób na obliczanie największego wspólnego dzielnika (NWD) dwóch liczb.**

**Głównym założeniem algorytmu Euklidesa jest to, że NWD dwóch liczb jest taki sam jak NWD ich reszty z dzielenia. Ten proces jest powtarzany, aż do uzyskania reszty równej 0. Wówczas NWD jest równy ostatniej niezerowej reszcie.**

**Dowodem poprawności algorytmu Euklidesa jest fakt, że jego wynik zawsze jest poprawny i jest największym wspólnym dzielnikiem dwóch liczb. Ponadto, algorytm jest bardzo efektywny i złożoność obliczeniowa jest stosunkowo niska, co czyni go praktycznie użytecznym w wielu dziedzinach, takich jak kryptografia i teoria liczb.**

**NWD liczb: a = ``42`` i b = ``24.``**

![Screenshot 2022-11-29 112719](https://user-images.githubusercontent.com/115026224/204491136-b1d18c73-e9ed-45b4-a5fc-0fc6815b2fbe.png)

### Udowodnienie ze poprawny algorytm euklidesa

**A lgorytm euklidesa może być wykorzystywany do wyznaczenia największego wspólnego dzielnika (NWD) dwóch liczb.
Przykład:
Chcemy wyznaczyć NWD liczb ``60`` i ``48``.
Dzielimy większą liczbę ``(60)`` przez mniejszą ``(48)`` i zapisujemy resztę: ``60 / 48 = 1`` reszta ``12``
Teraz dzielimy mniejszą liczbę ``(48)`` przez resztę ``(12)`` i zapisujemy resztę: ``48 / 12 = 4`` reszta ``0``
Jeżeli reszta jest równa ``0``, to NWD jest równy dzielnikowi ``(12)``.
W tym przypadku NWD liczb ``60`` i ``48`` wynosi ``12``.**

![Screenshot 2022-11-29 112732](https://user-images.githubusercontent.com/115026224/204491197-d580ad5c-ed4e-4d98-a2e5-6b03ea332e2b.png)



**Oto algorytm euklidesa zapisany w postaci planu działań.**

1. **Wybieramy dwie liczby naturalne.**
2. **Jeśli liczby są równe,to NWD jest np.pierwszą z nich i to oznacza koniec działań.**
3. **Jeśli liczby nie są sobie równe,to trzeba:**
- **zbadać,która jest większa;**
- **odjąć od niej mniejszą i zastąpić większą przez otrzymaną różnicę;**
- **wrócić do sprawdzenia warunku w punkcie 2(pętla).**

**Złożoność czasowa**

![Zrzut ekranu 2023-01-31 195019](https://user-images.githubusercontent.com/115026224/215841408-d632d905-0540-4812-90a3-b122876c01f1.png)




**Pseudokod NWD**
```
Zadeklaruj funkcję NWD(a, b)
  Jeśli b jest równe 0,
    Zwróć a
  W przeciwnym razie
    Zwróć NWD(b, a modulo b)

Zadeklaruj funkcję main()
  Zadeklaruj zmienne a i b jako liczby całkowite
  
  Wyświetl na ekranie "Wpisz dwie liczby całkowite: "
  Wczytaj a i b
  
  Wyświetl na ekranie "NWD %d i %d to %d.\n", wstawiając a, b i NWD(a, b) jako argumenty
  
  Zwróć 0

```
 [Code NWD](https://github.com/Noxisa/Algorytmy-i-struktury/blob/main/Projekty/NWD.c)
-----------------------------------------------------------------

## Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca

### Przyklad zastosowania algorytmu knutha-morrisa-pratta wyszukiwania wzorca.

**Algorytm Knutha-Morrisa-Pratta może być użyty do wyszukiwania wzorca w długim tekście. Na przykład, jeśli mamy tekst "Ala ma kota, a kot ma Alę", a chcemy wyszukać w nim wzorzec "kot", możemy użyć tego algorytmu.**

**Krok 1: Tworzenie tablicy prefiksów dla wzorca "kot".
Tablica prefiksów jest tablicą, która przechowuje informację o tym, ile części wzorca jest wspólne z poprzednimi prefiksami. Na przykład, w wzorcu "kot", prefiks "ko" jest wspólny z sufiksem "k".**

**Tablica prefiksów dla wzorca "kot" wygląda tak:
k o t
0 0 0**

**Krok 2: Przeszukiwanie tekstu
Następnie, przeszukujemy tekst, porównując każdy znak wzorca z odpowiadającym mu znakiem w tekście. Jeśli znak się nie zgadza, przesuwamy wzorzec o wartość z tablicy prefiksów. W przeciwnym wypadku, dodajemy 1 do indeksu wzorca i tekstu i kontynuujemy porównywanie.**

**Przykład:
Ala ma kota, a kot ma Alę
k o t
Znak "k" w tekście i wzorcu się zgadza, więc przesuwamy indeksy obu o 1.
Ala ma kota, a kot ma Alę
k o t
Znak "o" w tekście i wzorcu się zgadza, więc przesuwamy indeksy obu o 1.
Ala ma kota, a kot ma Alę
o t
Znak "t" w tekście i wzorcu się zgadza, więc przesuwamy indeksy obu o 1. Wzorzec jest teraz zakończony i możemy stwierdzić, że wzorzec "kot" został znaleziony w tekście.
Krok 3: Zwracanie indeksu w tekście
Indeks w tekście, gdzie został znaleziony wzorzec, to pozycja, na której z Zwracanie indeksu.**

### Udowodnienie ze poprawny algorytm knutha-morrisa-pratta wyszukiwania wzorca.

**Algorytm Knutha-Morrisa-Pratta jest liniowy w czasie, ponieważ używa tablicy prefiksów, aby zoptymalizować proces wyszukiwania wzorca. Tablica prefiksów jest tworzona za pomocą preprocessingu, który jest wykonywany tylko raz przed wyszukiwaniem wzorca.
Po uzyskaniu tablicy prefiksów, algorytm wyszukiwania wzorca jest realizowany poprzez porównywanie każdej litery tekstu z odpowiadającym mu fragmentem wzorca. Jeśli te litery są równe, proces jest kontynuowany, a jeśli nie, to jest przeskakiwanie do poprzedniej litery wzorca z użyciem informacji z tablicy prefiksów.
Ze względu na fakt, że każdy znak tekstu jest porównywany tylko raz z wzorcem, czas działania algorytmu jest liniowy względem długości tekstu. W rzeczywistości, długość tablicy prefiksów jest znacznie mniejsza niż długość wzorca, co oznacza, że czas działania algorytmu jest jeszcze bardziej zoptymalizowany.
Wnioskując, algorytm Knutha-Morrisa-Pratta jest poprawny i liniowy w czasie, co oznacza, że jest to efektywny sposób na wyszukiwanie wzorca w tekście.**


**PseudoKod algorytm knutha-morrisa-pratta wyszukiwania wzorca**
```
void KMPSearch(char *pat, char *txt) {
    M = strlen(pat); // długość wzoru
     N = strlen(txt); // długość tekstu

     *lps = (int *)malloc(sizeof(int) * M); // tworzenie tablicy lps
    j = 0; // iterator dla wzoru

    computeLPSArray(pat, M, lps); // obliczanie tablicy lps

    i = 0; // iterator dla tekstu
    while (i < N) {
        if (pat[j] == txt[i]) { // jeśli znak jest taki sam
            j++;
            i++;
        }

        if (j == M) { // znaleziono wzór
            printf("Znaleziono wzór w index %d \n", i - j);
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    free(lps);
}

void computeLPSArray(char *pat, int M, int *lps) {
     len = 0;
     i = 1;

    lps[0] = 0;

    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}
```
 [Code Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca ](https://github.com/Noxisa/Algorytmy-i-struktury/blob/main/Projekty/Algorytm%20Knutha-Morrisa-Pratta%20wyszukiwania%20wzorca.c)

**Wydajność algorytmu wyszukiwania.**

**Wydajność algorytmu zależy od różnych czynników, takich jak rozmiar tekstu, długość wzorca, ilość powtórzeń wzorca w tekście i metoda wyszukiwania.**

**Niektóre z popularnych algorytmów wyszukiwania tekstu to:
Algorytm Knutha-Morrisa-Pratta (KMP)
Algorytm Boyera-Moore'a
Algorytm Rabin-Karpa**

**Te algorytmy różnią się między sobą czasem i ilością pamięci, jakie potrzebują do wykonania operacji wyszukiwania, a także ich skutecznością w zależności od konkretnych potrzeb i właściwości tekstu.**

**Złożoność czasowa**

**Jest to algorytm preprocesowania, co oznacza, że wstępnie oblicza się tablicę przejść, która jest używana podczas procesu wyszukiwania.
Złożoność czasowa algorytmu Knutha-Morrisa-Pratta wynosi ``O(n + m)``, gdzie n jest długością tekstu, a m jest długością wzorca. Oznacza to, że w czasie stałym jest możliwe przeskanowanie każdego znaku tekstu i porównanie go z każdym znakiem wzorca. Dzięki temu algorytm jest bardzo szybki i skuteczny w porównaniu do innych algorytmów wyszukiwania wzorca. Przykłady zastosowania algorytmu Knutha-Morrisa-Pratta to wyszukiwanie danych w dużych bazach danych, wyszukiwanie wzorców w genomie i w tekście, a także wyszukiwanie plików z danymi w systemie plików.**
![running-time-analysis-step-3-4-5](https://user-images.githubusercontent.com/115026224/216827182-94c2d649-74a9-4dbe-9c18-e6f5c4fd6374.png)


-------------------------------------------------------------------------------------------------------------------
## Algorytm dołączania nowego elementu do końca listy jednokierunkowej.

**Lista jednokierunkowa-jest oszczędną pamięciowo strukturą danych pozwalającą grupować dowolną-ograniczoną tylko ilością dostępnej pamięci-liczbę elementów: liczb,znaków,rekordów.Do budowy listy jednokierunkowej używane są dwa typy komórek pamięci.Pierwszy typ jest zwykłym rekordem natury informacyjnej zawierającym dwa wskaźniki do początku i do końca listy.Drugi typ komórek jest również rekordem lecz ma już on charakter roboczy.Zawiera bowiem pole wartości i wskaźnik na następny element listy.Pola głowa ogon i następny są wskaźnikami,natomiast wartość może być czymkolwiek:liczbą,znakiem,rekordem.
Jeżeli lista jest pusta to struktura informacyjna zawiera dwa wskaźniki null.Null nie równa się zero jest to pewien adres,na który żadna zmienna nie wskazuje.Pierwszy element listy jest złożony z jego własnej wartości oraz ze wskaźnika na drugi el.listy.Drugi zawiera własne pole informacyjne i wskaźnik na trzeci element listy.Miejsce zakończenia listy zaznaczamy przez wartość null.**


**Dołączanie elementów do listy jednokierunkowej-podczas dokładania nowego elementu możliwe są dwa podejścia: 1).Albo będziemy traktować listę jak„worek”do gromadzenia danych nieuporządkowanych albo 2).Nowe elementy dokładane będą w liście we właściwym porządku.Działanie funkcji dorzuć: w przypadku listy pustej oba pola struktury informacyjnej są inicjowane wskaźnikiem na nowo powstały element.W przeciwnym wypadku nowy element zostaje podpięty do końca stając się ogonem listy.Możliwe jest dokładanie nowego rekordu przez pierwszy element listy stawałby się on wówczas automatycznie głową listy i musiałby zostać zapamiętany przez program.
Bardziej złożona jest funkcja dołączająca nowy element w takie miejsce aby całość lity była posortowana
Nowy element może zostać wstawiony na początek,koniec,lub w środku listy.Trzeba znaleźć miejsce wstawienia tzn.zapamiętać dwa wskaźniki:element,przed którym mama wstawić nową komórkę i element,za którym mama to zrobić.Do zapamiętania tych informacji wybieramy dwie zmienne np.przed i po.Następnie,gdy dowiemy się gdzie jesteśmy możemy dokonać wstawienia nowego elementu do listy.Sposób zależy od miejsca wstawienia i od tego czy lista przypadkiem nie jest jeszcze pusta.Skomplikowanie funkcji,która dokładaelement do listy wynika z połączenia w niej rozszukiwania miejsca wstawienia z samym dołączeniem elementu.Można te czynności rozbić na dwie osobne funkcje.Istnieją trzy przypadki„współrzędnych”współrzędnych nowego elementu** 
a)**przed = NULL** 
b)**Po = NULL** 
c)przed po = NULL**

**W zależności od ich wystąpienia zmieni się sposób dołączenia elementu do listy.
Do usuwania ostatniego elementu z listy używamy operatora dekrementacji.Funkcja, która się za nim ukrywa jest relatywnie prosta:jeśli na liście jest tylko jeden element to modyfikacji ulega zarówno pole głowa jaki ogon struktury informacyjnej oba te pola po uprzednim usunięciu jedynego elementu listy zostano zainicjowane wartością NULL.Trudniejszy jest przypadek gdy lista zawiera więcej niż jeden element.Należy wówczas odszukać przedostatni jej element aby móc odpowiednio zmodyfikować wskaźnik ogon struktury informacyjnej.Znajomość przedostatniego elementu listy umożliwia nam łatwe usunięcie ostatniego elementu listy.
Stos-jest liniową strukturą danych dostępnych do zapisywania i odczytywania tylko jednego końca(tzw. wierzchołka)Nowe elementy są dokładane na wierzch stosu i zdejmowane z wierzchu.Ostatni element położony na stosie będzie pierwszym z niego zdjętym.Stos jest nazywany strukturą LIFO(last In first out)
Operacja na stosie-initialize-powoduje opróżnienie stosu,empty-sprawdzenie czy stos jest pusty,full-czy stos jest zapełniony,push-umieszczenie elementu na stosie,pop-zdjęcie najwyższego elementu ze stosu.Ciąg operacji pusch i pop:**

1).**Albo będziemy traktować listę jak„worek”do gromadzenia danych nieuporządkowanych.**
 ![image](https://mermaid.ink/img/pako:eNplz78KgzAQBvBXCTebPoBDof6jQ3Gwo3E4zLUKRkUSaBHfvWfSLZny_e4j5HboF02QwnvDdRCPRs2Cz629E-pOyIu8iqyt6WOFRovdfywkex5CFlp51Mp9q4i88F5GXnqvIq-81-N0RkjA0GZw1Pzp_RQFdiBDClK-anqhm6wCNR9cRWeX53fuIbWbowTcyu9SMSKvawIePyswTM4?type=png)
 
 2).**Nowe elementy dokładane będą w liście we właściwym porządku.**
 ![image](https://mermaid.ink/img/pako:eNplj8EOgjAMhl9l6UkT8AF2MBFG4kE96JFxaFiVBTbIHImG8O6OkXihp_b726TfBHWvCDi8HA4Nu9ylZaFO5ZlQVSxNjyzb3ejjmUCP-zXNIs_LP69WnkcuNlyw9BCCYhMU8cDqbhkhAUPOoFbhnWkhEnxDhiTw0Cp0rQRp57CHo-8fX1sD926kBMZBoSehMVgY4E_s3oGS0r5319Uvas4_OylIEQ?type=png)

[Code list jedenkierunkowy ](https://github.com/Noxisa/Algorytmy-i-struktury/blob/main/Projekty/list%20jedenkierunkowy.c)
----------------------------------------------------------------------------------------------------------
### Literatura
[Wikipedia
Algorytmy i struktury danych](https://pl.wikipedia.org/wiki/Struktura_danych),[Euklides z Aleksandrii](https://pl.wikipedia.org/wiki/Euklides),[Knutha-Morrisa-Pratta](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm).

