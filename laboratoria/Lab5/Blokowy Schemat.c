/*
Tomas Chmelevski. Student
* -----------------
*Sortowanie algorytmem MergeSort. Implementacja rekurencja. Blokowy schemat
* -----------------
2022-12-06
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <math.h>
#define Max_line_length 1000
int merge(int array, int left,int mid,int right, int end);
int  mergeSort(int array[], int left, int right, int end, int start){
  if(left > right){
    start = 0; 
    } else{
   int mid = floor((left+right)/2);
    if(array[mid] < end){
   int  mergeSort1(int arr,int left,int  mid);
      }else if(end > array[mid]){
     mergeSort( array,  mid+1,  right, end, start);
      }else{
     merge( array,  left, mid, right, end);
      }
    }
  return end;
  }
int main(void){
  FILE *fptr;
 int Liczba;
  int i = 0, n =0, number;
  int array[Max_line_length];
 fptr = fopen("random.dat", "r");
if (fptr != NULL) {
            printf("File opened successfully!\n");
	} else {
            printf("Failed to read the file.\n");
            return -1;
	}
  do {
		printf("Wprowadzenie n. Musi byc != 0 \n");
		scanf("%d", &n);
	} while (n <= 0);

	while ( fscanf(fptr, "%d", &number ) == 1 ) {
		array[i] = number;
		
	}
  while (i < n) {
		int j = 1 + rand() % 138573;
		printf("%d \n", j);
		
	}

	fclose(fptr);
	return 0;
}
