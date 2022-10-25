#include <stdio.h>
#include <time.h>


// Tomas Chmelevski. Student
    // Tablica
    // 2022-10-24

   int find(float item, float *arr);

void insert(float item, int pos, float *arr);

void remove2(float pos, float *arr);

int size(float *arr);

float findMax(float *arr);

float findMin(float *arr);

void printTable(float *arr);

    

    void main(void) {
         int arr[100];
       float i, x=50,  n=10;
        // realizacja
      int pozycja = find(5.1, arr);
  printf("Pozycja: %d\n", pozycja);
  float max = findMax(arr);
  printf("Maksimum: %f\n", max);
  float min = findMin(arr);
  printf("Minimum: %f\n", min);
  printTable(arr);

      return;
    }

    // Funkcii
int find(float item, float *arr){
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    if(item == arr[i]){
      return i;
    }
  }
  return -1;
}

void insert(float item, int pos, float *arr){
  arr[pos] = item;
}

void remove2(float pos, float *arr);

int size(float *arr){
  int i = (sizeof(arr)/sizeof(arr[0]));
  printf("\n%d",i);
  return i;
}

float findMax(float *arr){
  float max = arr[0];
  for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  return max;
}

float findMin(float *arr){
  float min = arr[0];
  for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
    if(min > arr[i]){
      min = arr[i];
    }
  }
  return min;
}

void printTable(float *arr){
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
    printf(" %.2f ", arr[i]);
  }
 
}
