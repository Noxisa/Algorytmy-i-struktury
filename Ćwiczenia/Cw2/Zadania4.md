#Zadanie 4
pseudocod Srednia arytmetyczna

Obliczenia_srednej(n, tab){
  suma = 0
  i = 0

  while (i < n){
    suma += tab[i]
    i++
  }
  srednia = tab[i] / n
  return srednia
}
``
```
załóżmy że, mami trzy różne liczby, których średnia arytmetyczna jest równa 4, oraz dwie inne liczby, których
średnia jest równa 2, uzasadnim, że średnia arytmetyczna zestawu tych pięciu liczb jest równa 3,2 to znaczy dla
sumy całej średniej arytmetycznej zostani podzielona przez ona 5
```
<img width="96" alt="197415714-06384bf0-47e8-4f39-84bf-fde23b972e92" src="https://user-images.githubusercontent.com/115026224/199215410-4405bca0-3fd8-49ec-aa7d-05f516d2070a.png">

<img width="131" alt="197415884-4af7290d-27a1-4961-a550-2966023a0e42" src="https://user-images.githubusercontent.com/115026224/199215966-44664934-5986-44b4-b14d-5a0646a676d2.png">

<img width="167" alt="197416590-6ec36f99-999d-45a0-a801-a3d8e8dc5104" src="https://user-images.githubusercontent.com/115026224/199215993-bcc290b0-54c5-4da8-8428-5ec8a8d866f0.png">

<img width="253" alt="197416421-09986580-93bb-4de9-a8b3-e599afb15b79" src="https://user-images.githubusercontent.com/115026224/199216006-82e15177-9835-40c4-8ba2-ffcd465bcb72.png">

<img width="417" alt="197416501-55472261-c539-4a9f-ba61-ca7c78ebd5a0" src="https://user-images.githubusercontent.com/115026224/199216030-b7bf5137-2504-41c2-8a53-f173e60e0032.png">

Stąd wychodzi że prawa strona jest równa lewa, i może stego zrozumieć że algorytm jest całkowicie 
poprawny za pomoca założenia matematycznej


``
