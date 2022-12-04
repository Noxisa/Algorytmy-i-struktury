// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu Fibonacciego
// 2022-11-22
#Zadanie 2

Pseudokod


 fib( n)
{
  if(n==1)
      return 0;
  if(n==2)
   return 1;
  return fib(n-2)+fib(n-1);
}

Kod
int Fib(int n);

void main(void){
 
 printf("Fibonacciego = %d\n", fib(4));
}

int fib(int n){
if(n == 1)
 return 0;
 else if(n == 2)
  return 1;
 return fib(n-2)+fib(n-1);
 return;
}
