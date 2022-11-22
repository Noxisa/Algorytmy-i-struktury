// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do wyprowadzenia n-tej liczby trojkatu Paskalia
// 2022-11-22
#Zadanie 5

Pseudokod
#include <stdio.h>


int main(void) {
  int n =3;
  int* tab[n+1];
   tab[0]=1;

  for(int i = 0; i < n; i++){
    for(int j=i+1; j > 0; j--){
      tab[j] = tab[j-1];
    }
  }

  for(int i=0; i<n+1; i++){
    printf("%d",tab[i]);
  }
  return 0;
}
