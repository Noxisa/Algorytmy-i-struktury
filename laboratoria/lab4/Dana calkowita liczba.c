// Tomas Chmelevski. Student
//Dana calkowita liczba n>=1. Napisz rekurencyjna funkcja takiej liczby a, ktora wypelnia taki warunek 2ª¯¹ <= n <2ª
// 2022-11-22
Zadanie 1

Pseudokod
liczba(n,a);
  if(pow(2,a-1) <= n&&n < pow(2,a)){
    return a;
  }
  else
  
  return liczba(n, a+1);