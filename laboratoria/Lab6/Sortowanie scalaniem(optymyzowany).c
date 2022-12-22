/*
Tomas Chmelevski. Student
* -----------------
* Sortowanie.
* -----------------
2022-12-13
*/

Kod swap
````
#include <stdio.h>

int swap(int *array, int index1, int index2) {
  int temp = array[index1];
  array[index1] = array[index2];
  array[index2] = temp;
}
````
