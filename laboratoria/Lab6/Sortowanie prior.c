/*
Tomas Chmelevski. Student
* -----------------
* Sortowanie.
* -----------------
2022-12-13
*/
Kod prior
````
#include <stdbool.h>
#include <stdio.h>

bool prior(int *array, int index, int index2) {
  if (array[index] <= array[index2]) {
    return true;
  }

  return false;
}
````
