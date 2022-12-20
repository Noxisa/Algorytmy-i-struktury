/*
Tomas Chmelevski. Student
* -----------------
* Sortowanie.
* -----------------
2022-12-13
*/

Kod scalaniem
````
#include <math.h>
#include <stdio.h>

void scal(int array[], int left, int tempArray, int right,int  mid) 
{
	if( left = right);
  return;
 
 int MergeSort(int array,int temp[],int  left,int  mid);
  int mergeSort(int array,int  temp[],int  mid+1,int  right);
  mid =( left + right ) /2;
   temp[i] = array[i];  
  
  i1 = left; i2 = mid + 1;
   for (curr = left; curr <= right; curr++) {
     if (i1 == mid + 1) {
		array[curr] = temp[i2++];
     } else if (i2 > right) {
      	array[curr] = temp[i1++];
     } else if (prior(temp[i1], temp[i2])) {
     	array[curr] = temp[i1++];
     } else {
       array[curr] = temp[i2++];
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
```
