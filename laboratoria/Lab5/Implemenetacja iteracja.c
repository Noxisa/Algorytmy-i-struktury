/*
Tomas Chmelevski. Student
* -----------------
*Binarne poszukiwanie. Implemenetacja iteracja. Implementacja rekurencja.

* -----------------
2022-12-06
*/
#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define Max_lenght 1000

int binarySearch(int *array, int key, int length) {
  int lowIndex = 0, highIndex = length;
  while (lowIndex < highIndex) {
    int midIndex = floor((highIndex - lowIndex) / 2);
    if (array[midIndex] == key) {
      return midIndex;
    } else if (key > array[midIndex]) {
      lowIndex = midIndex;
    } else {
      highIndex = midIndex;
    }
  }
  return -1;
}

int binarySearchRecursion(int start, int end, int index, int *array, int key) {
  if (start > end) {
    index = 0;
    } else{
    int midIndex = floor((start + end)/2);
    if (array[midIndex] < key){
      binarySearchRecursion(array, midIndex +1, end, index, key);
    }else if (key > array[midIndex]){
      binarySearchRecursion(array, start, midIndex -1, index, key);
    }else{
      index = midIndex;
    }
    }
  return -1;
  }

int main(void){
FILE *fptr;
int t,j;
	fptr = fopen("random.dat", "w");

	int n = 0, i = 0;
	srand(( unsigned )time(NULL));

	if (fptr != NULL) {
      printf("File created successfully!\n");
	}
	else {
		printf("Failed to create the file.\n");
		return -1;
	}

	do {
		printf("Wprowadzenie n. Musi byc != 0 \n");
		scanf("%d", &n);
	} while (n <= 0);

	t = clock();

	while (i < n) {
		int j = 1 + rand() % 138573;
		printf("%d \n", j);
		fprintf(fptr, "%d\n", j);
		i = i + 1;
	}
	fclose(fptr);
	return 0;
}
