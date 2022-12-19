// Tomas Chmelevski.Student
// Sortowanie 
//2022-12-13
*/
prior - funkcja porównanie zawartości dwóch elementów w tablicy
Sortowanie BubbleSort Pseudokod
```
 bubbleSort(array, size) {
   for (i= 0; i < size - 1; i++) {
		for (j = size - 1; j > i; j--) {
			if (prior(array[j], array[j-1])) {
				swap(array, j, j-1);
}
}
}
}


 swap(array, index, index2) {
  temp = array[index1];
  array[index1] = array[index2];
  array[index2] = temp;
}

````
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
````


Sortowanie przez wstawianie
```
insertionSort(array, size) {
   for (i= 0; i < n - 1; i++) {
		for (j = i; j > 0 && prior(array[j], array[j-1]); j--) {
			swap(array, j, j-1);
}
}
}
```
Kod wstawianie
````
include <math.h>
#include <stdio.h>
 

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
````
Sortowanie przez wymiana

```
 selectionSort(array, size) {
   for (i= 0; i < n - 1; i++) {
		lowIndex = i;
		for (j = n-1; j > i; j--) {
			if (prior(array[j], array[lowIndex])) {
				lowIndex = j
				swap(array, i, lowIndex);
			}
}
}
}

```
Kod wymian
````
#include <math.h>
#include <stdio.h>
 
	void selectionSort( int arr[], int size );

int main(void)
{
    int array[5], i, j, lowIndex,n,swap;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i = 0; i < (n -1); i++)
    {
        for (j=(i + 1); j < n; j++)
        {
            if(array[i] > array[j])
            {
                lowIndex = j;
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
    printf("Sorted array is : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ",array[i]);
    }
    return 0;
}
````
Sortowanie scalaniem
```
 mergeSort(array, tempArray, left, right) {
   if (left == right) return;
   mid = (left + right) / 2;
   mergeSort(array, temp, left, mid);
   mergeSort(array, temp, mid+1, right);
   for (i= left; i < right1; i++) {
     temp[i] = array[i];
   }
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

```
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
````
Pseudokod (optymyzowany):
```
 mergeSortOpt(array, tempArray, left, right) {
   if (left - right <= THRESHOLD) {
     insertionSort(&array[left], right-left+1);
   }
   i, k, j, mid = (left + right) / 2;
   mergeSort(array, temp, left, mid);
   mergeSort(array, temp, mid+1, right);
   for (i= mid; i >= left; i--) {
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
```
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
Pseudokod (merge oraz mergeSort):
```
 merge(array, size1, array2, size2) {
   i= 0, k = 0, j = 0;
   result[size1 + size2] // memory allocation

   while((i < size1) && (j < size2)) {
if(array[i] < array2[j]) {
  result[k++] = array[i++];
        } else {
          result[k++] = array2[j++];
        }
   }
   while(i < size1) result[k++] = array[i++];
   while(j < size2) result[k++] = array2[j++];

   return result;
}
```
Kod (merge oraz mergeSort)
````
#include <stdio.h>

void merge(int arr[], int size1, int arr2[], int size2, int result[])
{ 
   
   int i = 0;  
  int   j = 0;  
   int  k = 0; 
    while (i < size1 &&  j < size2) 
    { 
        if (arr[i] < arr2[j]) 
        { 
             result[k++] = arr[i++];
        } 
        else
        { 
            result[k++] = arr2[j++]; 
        } 
        k++; 
    } 
  
    
   while(i < size1) result[k++] = arr[i++];
   
  while(j < size2) result[k++] = arr[j++]; 
   
} 
  

int main() 
{ 
    int arr[] = {70, 50, 30, 10, 20, 40,60}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    printf("Podana tablica to \n"); 
   int  printArray(int arr,int  arr_size); 

  
    printf("\nPosortowana tablica to \n"); 
   int  printArray(int arr,int  arr_size); 
    return 0; 
} 
````
Pseudokod (merge oraz mergeSort):
```
 subArray(array, start, end) {
    size = end - start;
	result[size];
    i = 0;
	while (i < size) {
result[i] = array[start + i];
i++;
}
return result;
}

function mergeSort(array, size) {
   if (size <= 1) return subArray(array, 0, size);

   m = size / 2; 

   return merge(mergeSort(subArray(array, 0, m), m), m, mergeSort(subArray(array, m, size), size - m), size - m);
}
```

Sortowanie szybkie

Pseudokod (partition i findPivot):
```
 partition(array, left, right, pivot) {
   while (left <= right) {
      while (prior(pivot, array[left])) {
         left++;
      }
      while (prior(array[right], pivot)) {
         right--;
      }
      if (left <= right) {
			  swap(array, left, right);
              left++;
              right--;
     }
   }
   return left;
}
function findPivot(array, i, j) {
	return ((i + j ) / 2);
}
````
Pseudokod (quickSort):
```
quickSort(array, left, right) {
   if (right <= left) {
		return;
   }

   pivotIndex = findPivot(array, left, right); 
   swap(array, pivotIndex, right);
   k = partition(array, left- 1, right, array[right]);
   swap(array, k, right);
   quickSort(array, left, k - 1);
   quickSort(array, k + 1, right);
}

```

Sortowanie przez zliczanie
```
 countingSort(array, size, max) {
   result = []; count = []
   for (i = 0; i < max; i++) {
     count[i] = 0; 
   }

   for (j = 0; j < size; j++) {
     count[array[j]] = array[j] + 1; 
   }

   for (i = 0; i < max; i++) {
     count[i] = count[i] + count[i - 1]; 
   }

   for (j = size - 1; j > 0; j--) {
     result[count[array[j]] - 1] = array[j]; 
	 count[array[j]] = count[array[j]] - 1;
   }
   return result;
}
```

Sortowanie pozycyjne

```
 radixSort(array, max) {
	for (j = 1; j < max; j++) {
		count[10] = {0}

		for (i = 0; i < n; i++) {
			count[key of (array[i] in pass j)]++
}

for (k = 0; k < 10; k++) {
			count[k] = count[k] + count[k - 1]
}

for (i = n - 1; i > 0; i--) {
	result[ count[key of (array[i])] ] = array[j]
    count[key of (array[i])]--;
}
for (i = 0; i < n; i++) array[i] = result[i]
}
}
```
