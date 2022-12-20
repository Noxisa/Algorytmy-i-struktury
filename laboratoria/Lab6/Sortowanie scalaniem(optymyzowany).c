/*
Tomas Chmelevski. Student
* -----------------
* Sortowanie.
* -----------------
2022-12-13
*/

Kod (optymyzowany)
````
#include <math.h>
#include <stdio.h>



void scal(int array[], int left, int tempArray, int right,int  mid) 
{
	if( left - right <= THRESHOLD);
  return;
 
 int mergeSortOpt((int array,int temp[],int  left,int  mid);
  int mergeSort(int array,int  temp[],int  mid+1,int  right);
  int = i, k, j,
  mid =( left + right ) /2;
   temp[i] = array[i];  
    }
   for (j= 1; j <= right - mid; j++) {
     temp[right - j + 1] = array[j + mid];
   }
   for (i= left, j= right, k= left; k <= right; k++) {
     if (prior(temp[i], temp[j])) {
		array[k] = temp[i++];
     } else {
      	array[k] = temp[j--];
     }   
   }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
````
