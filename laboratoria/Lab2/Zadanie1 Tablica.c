
// Tomas Chmelevski. Student
    // Tablica
    // 2022-10-31



 #include <stdio.h>

    int find(int item, int *arr, int arr_size);

    void insert(int item, int pos, int *arr);

    void removenew(int pos, int *arr, int arr_size);

    int size(int *arr);

    int findMax(int *arr, int arr_size);

    int findMin(int *arr, int arr_size);

    void printTable(int *arr, int arr_size);

  

    int main(void) {
        
      int arr[] = {1, 2, 3, 4, 5, 6, -1};
      int arr_size = sizeof(arr)/sizeof(int);
      printf("Size of array: %d\n", arr_size);
      int pozycja = find(9, arr, arr_size);
      

        if (pozycja == -1){
          printf("Podanej wartosci niema w tablicy!\n");
        }
        else (printf("Podana wartosc znaleziono na pozycji %d\n", pozycja));
     
      insert(7, 5, arr);

      printf("Wartosci w tablicy po insert: ");
      for (int i = 0; i < arr_size; i++){
        printf("%d, ", arr[i]);
      }

      removenew(3, arr, arr_size);

      printf("\nWartosci w tablicy po removenew: ");
      for (int i = 0; i < arr_size; i++){
        printf("%d, ", arr[i]);
      }
      
      int arr_max = findMax(arr, arr_size);

      printf("\narr_max: %d\n", arr_max);

      int arr_min = findMin(arr, arr_size);

      printf("arr_min: %d\n", arr_min);


      printTable(arr, arr_size);
  
    return 0;
    }

      int find(int item, int *arr, int arr_size){
      int soa = sizeof(&arr)/sizeof(int);
    
      for (int i = 0; i < arr_size; i++){
        if (item == arr[i]){
          return i;
        }
      }
      return -1;
    };

    void insert (int item, int pos, int *arr){
      arr[pos] = item;
    }

    void removenew(int pos, int *arr, int arr_size){
      for (int i = pos; i < arr_size - 1; i++){
        arr[i] = arr[i +1];
      }
      arr[arr_size - 1] = 0;
    }

    int size(int *arr){
      int soa = sizeof(&arr)/sizeof(int);
      return soa;
    }

    int findMax(int *arr, int arr_size){
      int max = arr[0];
      for (int i = 0; i < arr_size; i++){
        if(max < arr[i]){
          max = arr[i];
        }
      }
      return max;
    }

    int findMin(int *arr, int arr_size){
      int min = arr[0];
      for (int i = 0; i < arr_size; i++){
        if (min > arr[i]){
          min = arr[i];
        }
      }
      return min;
    }

    void printTable(int *arr,int arr_size){
      for (int i = 0; i < arr_size; i++){
        printf("%d, ", arr[i]);
      }
    }
