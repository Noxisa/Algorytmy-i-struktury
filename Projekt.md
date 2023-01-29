Projekt z przedmiotu "Algorytmy i struktury danych"

Opis
 Algorytm Euklidesa.Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca.Algorytm dołączania nowego elementu do końca listy jednokierunkowej


Autor
Tomas Chmelevski Student 2 roku Informatyki

Zawartość
- ALGORYTM EUKLIDESA
- Algorytm Knutha-Morrisa-Pratta Wyszukiwania wzorca
- Algorytm dołączania nowego elementu do końca listy jednokierunkowej



**ALGORYTM EUKLIDESA**

**Algorytm opisuje sposób rozwiązania problemu krok po kroku.Opis ten powinien być dokładny i nie pozostawiać
wątpliwości,co,jak i w jakiej kolejności trzeba zrobić.Z algorytmami masz często do czynienia na lekcjach matematyki.
Jednym z przykładów algorytmu jest sposób znajdowania największego wspólnego dzielnika dwóch liczb całkowitych
(NWD).NWD jest potrzebny np.przy skracaniu ułamków.
Algorytmem poznanym przez ciebie na lekcjach matematyki jest sprawdzanie podzielności dwóch liczb całkowitych
przez kolejne liczby.Najpierw sprawdzamy podzielność przez 2,potem–przez 3 i tak dalej,aż do mniejszej z dwóch
liczb.Największym wspólnym dzielnikiem dwóch liczb jest iloczyn ich wszystkich wspólnych dzielników pierwszych.
Przyjrzyj się temu sposobowi na przykładzie szukania.**

**NWD liczb:``a = 42 i b = 24.``**

![Screenshot 2022-11-29 112719](https://user-images.githubusercontent.com/115026224/204491136-b1d18c73-e9ed-45b4-a5fc-0fc6815b2fbe.png)


**NWD liczb a i b wynosi więc `` 2 · 3 · 1 = 6.``
Lepszym i szybszym rozwiązaniem problemu szukania NWD dwóch liczb całkowitych jest algorytm Euklidesa.To
jeden z najstarszych algorytmów,opisany przez Euklidesa ok.300 roku p.n.e.Opiera się na spostrzeżeniu:jeśli od
większej liczby odejmiemy mniejszą,to mniejsza liczba i otrzymana różnica będą miały taki sam największy wspólny
dzielnik jak pierwotne liczby.Gdy w wyniku kolejnego odejmowania otrzymamy parę takich samych liczb,to oznacza,
że znaleźliśmy NWD.Popatrz,jak przebiega znajdowanie NWD dwóch liczb ``a = 42 i b = 24`` według tego algorytmu.**

![Screenshot 2022-11-29 112732](https://user-images.githubusercontent.com/115026224/204491197-d580ad5c-ed4e-4d98-a2e5-6b03ea332e2b.png)



**Oto algorytm Euklidesa zapisany w postaci planu działań.**

1. **Wybieramy dwie liczby naturalne.**
2. **Jeśli liczby są równe,to NWD jest np.pierwszą z nich i to oznacza koniec działań.**
3. **Jeśli liczby nie są sobie równe,to trzeba:**
- **zbadać,która jest większa;**
- **odjąć od niej mniejszą i zastąpić większą przez otrzymaną różnicę;**
- **wrócić do sprawdzenia warunku w punkcie 2(pętla).**

**Pseudokod NWD**
```

nwd(a, b) {
  
  while (b) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

```
**Kod NWD**
```
#include <stdio.h>

int nwd(int a, int b) {
  int c;
  while (b) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

int main(void) {
  int a, b;

  printf("podaj liczby: ");
  scanf("%d %d", &a, &b);

  printf("nww: %d\n", (a * b) / nwd(a, b));

  return 0;
}

```


**Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca**

**Algorytm Knutha-Morrisa-Pratta(lub w krótszym sposób algorytm KMP )jest podciąg(znak)algorytm wyszukiwania,co pozwala na znalezienie wystąpienia ciągu znaków w tekście o liniowej złożoności w najgorszym przypadku.Jego specyfika polega na wstępnym przetwarzaniu ciągu,który dostarcza informacji wystarczających do określenia,gdzie kontynuować wyszukiwanie w przypadku niezgodności.W ten sposób algorytm nie sprawdza ponownie znaków,które były widziane wcześniej,a zatem ogranicza liczbę koniecznych porównań.``PSO (|P| + |S|)``**

**Algorytm został zaprojektowany w 1970 roku przez Knutha i Pratta(in)oraz w innym kontekście przez Morrisa(in)i wspólnie opublikowany w 1977 roku. Niezależnie Matiyasevich uzyskał już w 1969 r.podobny algorytm,zakodowany przez dwuwymiarową maszynę Turinga,badając problem rozpoznawania występowania strun.**



**Zakłada istnienie tabeli podającej„częściowe dopasowania”(opisane poniżej),wskazującą,gdzie szukać potencjalnego początku następnego zdarzenia,w przypadku gdy weryfikacja obecnego potencjalnego wystąpienia się nie powiedzie.Na razie tę tablicę,oznaczoną przez,można traktować jako czarną skrzynkę z następującą właściwością:jeśli mamy częściowe dopasowanie do,ale nie powiedzie się podczas porównywania i,wtedy następne potencjalne wystąpienie zaczyna się od position .W szczególności istnieje i jest zdefiniowana w.Biorąc pod uwagę tę tabelę,algorytm jest stosunkowo prosty:``TS [m] S [m+i-1] S [m+w] LiczbaPi]m+i T[i-1] T [-1] -1.``**

**Napraw.Załóżmy,że ma długość znaków oraz, znaków;`` ja = m = 0 PnieSja``
Jeśli,a następnie zakończ przetwarzanie,nie znaleziono dopasowania.W przeciwnym razie porównaj i;`` m + ja = l Liczba Pi] S [m+w]``
Jeśli są równe,napraw.Jeśli,dopasowanie jest zakończone.Zakończenie przetwarzania i zwrot jako pozycja rozpoczęcia korespondencji; ``ja = ja + 1 ja = nm``
Jeśli są różne,napraw.Napraw,a jeśli napraw;``e = T [i-1] m = m + ie ja > 0 ja = e``
Kontynuować kroku n°2.
Opis ten implementuje algorytm zastosowany w poprzednim przykładzie.Za każdym razem,gdy sprawdzenie się nie powiedzie,tabela jest sprawdzana w celu znalezienia początku następnego potencjalnego wystąpienia,a liczniki są odpowiednio aktualizowane.Dlatego sprawdzanie znaków nigdy nie jest wykonywane wstecz.W szczególności każdy znak jest sprawdzany tylko raz (chociaż mógłby zostać odrzucony kilka razy w wyniku nieudanego dopasowania.Zobacz poniżej analizę skuteczności algorytmu.**

Przykładowy kod algorytmu wyszukiwania
**Poniższy fragment kodu C jest implementacją tego algorytmu dla 8-bitowych ciągów znaków.Aby przezwyciężyć wewnętrzne ograniczenia tabel w C,indeksy są przesunięte o jedną jednostkę,to znaczy,że w kodzie są równoważne z powyższym opisem.``T [i] T [i+1].``**

**PseudoKod Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca**
```
computeLPSArray(*pat, M, *lps);

KMPSearch(*pat, *txt) {
  M = strlen(pat);
  N = strlen(txt);

  *lps = (*)malloc(sizeof() * M);
  j = 0;

  computeLPSArray(pat, M, lps);

  i = 0;
  while (i < N) {
    if (pat[j] == txt[i]) {
      j++;
      i++;
    }

    if (j == M) {
      printf("Znaleziono wzór w index %d \n", i - j);
      j = lps[j - 1];
    }

    else if (i < N && pat[j] != txt[i]) {

      if (j != 0)
        j = lps[j - 1];
      else
        i = i + 1;
    }
  }
  free(lps);
}

computeLPSArray(*pat, M, *lps) {
  len = 0;
  i;

  lps[0] = 0;
  i = 1;

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

int main() {
  *txt = "ABABDABACDABABCABAB";
  *pat = "ABABCABAB";
  KMPSearch(pat, txt);
  return 0;
}
```
**Kod Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca.**
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void computeLPSArray(char *pat, int M, int *lps);

void KMPSearch(char *pat, char *txt) {
  int M = strlen(pat);
  int N = strlen(txt);

  int *lps = (int *)malloc(sizeof(int) * M);
  int j = 0;

  computeLPSArray(pat, M, lps);

  int i = 0;
  while (i < N) {
    if (pat[j] == txt[i]) {
      j++;
      i++;
    }

    if (j == M) {
      printf("Znaleziono wzór w index %d \n", i - j);
      j = lps[j - 1];
    }

    else if (i < N && pat[j] != txt[i]) {

      if (j != 0)
        j = lps[j - 1];
      else
        i = i + 1;
    }
  }
  free(lps);
}

void computeLPSArray(char *pat, int M, int *lps) {
  int len = 0;
  int i;

  lps[0] = 0;
  i = 1;

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

int main() {
  char *txt = "ABABDABACDABABCABAB";
  char *pat = "ABABCABAB";
  KMPSearch(pat, txt);
  return 0;
}
```
**Wydajność algorytmu wyszukiwania.**

**Zakładając wcześniejsze istnienie tablicy,faza„przeszukiwania”algorytmu Knutha-Morrisa-Pratta ma złożoność O,gdzie oznacza długość .Jeśli wykluczymy dodatkowe stałe przetwarzanie indukowane przez wejście i wyjście funkcji,całe przetwarzanie odbywa się w pętli głównej.Aby obliczyć limit liczby iteracji, konieczna jest pierwsza obserwacja dotycząca natury.Z definicji jest skonstruowany w taki sposób, że jeśli częściowe dopasowanie, które zaczyna się kończyć niepowodzeniem podczas porównywania i,następne potencjalne dopasowanie nie rozpoczyna się przed.W szczególności następne potencjalne dopasowanie musi znajdować się na pozycji większej niż,aby.``T(l) lSTS [m] S [m+i] P [i] S [m + (i-T[i])] mT [i] <i``**

**Na podstawie tego faktu pokazujemy,że pętla jest wykonywana najczęściej.W każdej iteracji wykonuje jedną z dwóch gałęzi instrukcji if.l**

**Pierwsza gałąź niezmiennie rośnie i nie zmienia się,więc indeks aktualnie sprawdzanego znaku w ciągu jest zwiększany.``imm + iS``
Druga gałąź dodaje do.Jak widzieliśmy, zawsze jest pozytywne.W ten sposób zwiększa się pozycja początku bieżącego potencjalnego meczu.``i - T [i] mi - T [i] m``
Pętla kończy się if,co oznacza, że biorąc pod uwagę konwencję C określającą,że znak NUL oznacza koniec łańcucha, to.W konsekwencji, każda gałąź instrukcji if może być przemierzona w większości przypadków,ponieważ odpowiednio wzrastają lub,a więc if,then i ponieważ wzrost w każdej iteracji wynosi co najmniej jedną jednostkę,z konieczności zostało to sprawdzone w przeszłości.``S [m+i]='\0'm + ja = llm + imm <= m + im =lm + i => lm + i = l``**

**W ten sposób pętla jest wykonywana w większości przypadków,ustanawiając w ten sposób złożoność algorytmiczną w.2l0(l)**


**Algorytm dołączania nowego elementu do końca listy jednokierunkowej.**


![Screenshot 2022-12-30 150627](https://user-images.githubusercontent.com/115026224/210073296-061e3a24-2648-4148-98df-7837dc49a05a.png)


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

Pseudokod list jedenkierunkowy
````
typedef struct node {
  struct node *next;
} node_t;

void print_list(node_t *head) {
  node_t *current = head;

  while (current != NULL) {
  }
}
pop(node_t **head) {
  retval = -1;
  node_t *next_node = NULL;

  if (*head == NULL) {
    return -1;
  }

  next_node = (*head)->next;
  retval = (*head)->val;
  free(*head);
  *head = next_node;

  return retval;
}

remove_by_value(node_t **head, int val){

}

{

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list->val = 1;
  test_list->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->val = 2;
  test_list->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->val = 3;
  test_list->next->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->next->val = 4;
  test_list->next->next->next->next = NULL;

  remove_by_value(&test_list, 3);
}
````


Kod list jedenkierunkowy 
````
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int val;
  struct node *next;
} node_t;

void print_list(node_t *head) {
  node_t *current = head;

  while (current != NULL) {
    printf("%d\n", current->val);
    current = current->next;
  }
}

int pop(node_t **head) {
  int retval = -1;
  node_t *next_node = NULL;

  if (*head == NULL) {
    return -1;
  }

  next_node = (*head)->next;
  retval = (*head)->val;
  free(*head);
  *head = next_node;

  return retval;
}

int remove_by_value(node_t **head, int val) {}

int main() {

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list->val = 1;
  test_list->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->val = 2;
  test_list->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->val = 3;
  test_list->next->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->next->val = 4;
  test_list->next->next->next->next = NULL;

  remove_by_value(&test_list, 3);
}
````

Literatura
Algorytmy i struktury danych,L.Banachowski,K.Diks,W.Rytter,Euklides z Aleksandrii,Knutha-Morrisa-Pratta.

