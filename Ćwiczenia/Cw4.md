Zadania z twierdzenia rekurencji uniwersalnej

Obliczyć następne rekurencji, w których T(1) = 1 i T(n) dla >= 2 wynosi.


Mamy T(n) = 3T(n/2) + n?
```
Przykład:
Wyznaczamy: a,b,c: a = 3, b = 2, c = 1
Obliczamy: 3n/2 *T + 2 = 1, c = 1 nie jest spelniony  
Rezultat: 3nT+2n/2
```
Mamy T(n) = 3T(n/2) + n²?
```
Przykład:
Wyznaczamy: a,b,c: a = 3, b = 2, c = 2
Obliczamy: 3Tn + 2n²/2 = 2, c = 2  nie  jest spelniony  
Rezultat: n(2n + 3T)/2
```
T(n) = 3T(n/2) + n³?
Przykład:
Wyznaczamy: a,b,c: a = 3, b = 2, c = 3
Obliczamy: 3Tn + 2n³/2 = 3, c = 3 jest spelniony  
Rezultat: n(2n + 3T)/3

T(n) = 4T(n/3) + n?
Przykład:
Wyznaczamy: a,b,c: a = 4, b = 3, c = 1
Obliczamy: 3Tn + 2n²/2 = 1, c = 1 nie  jest spelniony  
Rezultat:

T(n) = 4T(n/3) + n²?
Przykład:
Wyznaczamy: 
Obliczamy:  
Rezultat: 

T(n) = 9T(n/3) + n²?
Przykład:
Wyznaczamy:
Obliczamy: 
Rezultat: 

