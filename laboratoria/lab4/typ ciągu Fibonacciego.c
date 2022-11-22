// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do obliczenia -tej liczby ciągu Fibonacciego
// 2022-11-22
#Zadanie 1
Pseudokod
```
#include <stdio.h>
int fib(int n)
{
  if(n<3)
      return 1;
  return fib(n-2)+fib(n-1);
}
int main(void) {
  int n;
  printf("Podaj nr wyrzu ciągu:");
  scanf("%d",&n);

  printf("Wyraz ciągu ma wartość",fib(n));
  return 0;
}
```
