/*
Tomas Chmelevski. Student 
* -----------------
* Include files.
* -----------------
2022-12-13
*/

#include <stdio.h>
#include <errno.h>

#include "Sortowanie bobelkowa.c"
#include "Sortowanie swap.c"
#include "Sortowanie scalenie.c"
#include "Sortowanie prior.c"
#include "Sortowanie wstawianie.c"
#include "Sortowanie wymian.c"



int main(void) {
  int tabl[] = {5, 2, 5, 4, 8, 7, 5, 6, 9, 5, 2, 1, 4, 6, 5, 4, 8, 5, 3, 6, 9};
    int ilosc = sizeof(tabl) / sizeof(tabl[0]);
  int i;
  
  for (i = 0; i < ilosc; i++) {
    printf("%d", tab[i]);
  }
  mergeSort(tabl, 0, ilosc);
  printf("\n");
  for (i = 0; i < ilosc; i++) {
    printf("%d", tabl[i]);
  }
  return 0;
}
