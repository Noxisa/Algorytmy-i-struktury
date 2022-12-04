// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do wyprowadzenia n-tej liczby trojkatu Paskalia
// 2022-11-22
#Zadanie 5

Pseudokod
pas(q,k){
if(k == 0)
return 0
else if (q == 1 && k == 1)
return 1
else if(k > q)
return 0 
else
return (pas(q - 1, k -1)+pas(q -1, k))
}
 
Kod 

int pascal(int q, int k);

void main(void){

 printf("Pascalia = %d\n", pas(15,15));
}
int pas(int q, int k){
if(k == 0)
 return 0;
 else if (q == 1 && k == 1)
  return 1;
 else if (k > q)
  return 0;
 else
  return(pas(q - 1, k - 1)+ pas(q - 1, k));
 return;
}
