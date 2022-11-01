#Zadanie 1
pseudocod Factorial

Factorial(n)

    factorial = 1.0 
   
    i=1 
    while (i<=n) 
    {
      factorial *= i 
      i++ 
    }
  
    return factorial 
}
``
udowodnienie
indukcja matematyczna 

<img width="674" alt="197411917-2c1d24eb-e4ea-4476-ac86-d62b28a6cc53" src="https://user-images.githubusercontent.com/115026224/199214916-fc7fabdc-5d97-4040-a786-082889472127.png">


<img width="674" alt="197411930-d585e9d9-1223-400c-a267-676f0af42c6f" src="https://user-images.githubusercontent.com/115026224/199214975-1ce0e517-84e5-4c60-86a0-b234c0ae624a.png">



<img width="673" alt="197411969-bbf9cb36-ffad-4e10-936b-3f768d5704ee" src="https://user-images.githubusercontent.com/115026224/199214951-625dfc50-f3e0-4736-9472-0414cfb375b2.png">


``
#Zadanie 2
pseudocod Iloczyn i reszta. Realizacja z warunkem pocztkawym calkowita liczba - n, wyjsce licby(lista)

int iloczyn_i_reszta(liczba)
{
    int a,b,dzielnik=2;
    int lista[1][liczba/2];

    while(dzielnik<liczba/2){
        a=liczba%dzielnik;
        b=liczba/dzielnik;
        lista[0][dzielnik-2]=a;
        lista[1][dzielnik-2]=b;
        dzielnik++;
    }

    return lista;
}
``

![Screenshot (97)](https://user-images.githubusercontent.com/115026224/199216369-13cadd75-ff23-4c67-ab78-24f2388fb5f1.png)



``
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


#Zadanie 3 

Pseudokod NWD

NWD(liczba1, liczba2)
{
  dzielnik = 0
  while (liczba2 != 0)
        {
        dzielnik = liczba2
        liczba2 = liczba1 % liczba2
        liczba1 = liczba2
        }
  return liczba1
}
``
<img width="508" alt="197414660-62ba7ad0-9f49-44f0-860d-937b57a3f804" src="https://user-images.githubusercontent.com/115026224/199214827-8d336427-1a47-4ced-95d8-1abbe361b5e0.png">

<img width="327" alt="197414679-cb63f947-d62f-450d-8a87-d8274bdb531b" src="https://user-images.githubusercontent.com/115026224/199214773-77e1eca1-30c5-41c2-ba47-2ffa9b60b405.png">

``
















