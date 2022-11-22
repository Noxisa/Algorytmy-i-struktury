// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do obliczenia -tej liczby ciągu arytmcznego
// 2022-11-22
Zadanie 3

Pseudokod
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int ciag[255];
  int i, suma = 0;
  printf("Wpisz ciag liczbowy:");
  scanf("%d", &ciag);
  for(i= 0; ciag[i]!= 0; i++){
    suma+=ciag[i];
  }
  
  return 0;
}
