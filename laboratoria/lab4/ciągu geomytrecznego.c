// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu geomytrecznego
// 2022-11-22

#Zadanie 4

Pseudokod
 Geom(k,n,o)
 if(n > 1){
  q = k/o
  return  Geom(o,o*q,n - 1)
 else{
 return k
 }
