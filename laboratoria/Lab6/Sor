/*
Tomas Chmelevski. Student
* -----------------
* Sortowanie.
* -----------------
2022-12-13
*/

Kod  bubbleSort
````
#include <stdio.h>

int bubbleSort(int array,int  size);

int main()
{
  int array[100], size, i, j, swap;

  printf("Wprowadź liczbę elementów\n");
  scanf("%d", &size);

  printf("Wprowadź %d liczb całkowitych\n", size);

  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < size- 1; i++)
  {
   for (j = size - 1; j > i; j--)
    {
      if (array[j] > array[j-1])
      {
        swap       = array[j];
        array[j]   = array[j-1];
        array[j-1] = swap;
      }
    }
  }

  printf("Lista posortowana rosnąco:\n");

  for (i = 0; i < size; i++)
     printf("%d\n", array[i]);

  return 0;
}
