// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu geomytrecznego
// 2022-11-22

#Zadanie 4

Pseudokod
 {
   a1, n, q;
  if(n==0 && q == 0)
  for(int i = 0; i<n-1; i++){
    tab[i] = pow(q,i)*a1;
    }
  return 0;
}
