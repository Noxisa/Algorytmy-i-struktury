/*
Tomas Chmelevski. Student
* -----------------
* Sortowanie.
* -----------------
2022-12-13
*/


Kod (qiuckSort)
````
#include <stdio.h>


void  quickSort(int array,int  left,int  right) {
   if (right <= left) {
		return;
   }


int partition(int array[], int low, int high) 
{
  
 
  int pivot = array[high];
  

  int i = (low - 1);

 
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
     
      i++;
      
     
     int  swap( int array[],int  pivotIndex,int right);
    }
     k = partition(array, left- 1, right, array[right]);
  }

  
 int  swap(int array,int  k,int right);
  
 
  return (i + 1);
}

void quickSort(int array[], int left, int  k - 1) {
  if (low < high) {
    
 
    int pi = partition(array, low, high);
    
   
  int   quickSort(int array,int  k + 1,int  right);
    
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}



````
