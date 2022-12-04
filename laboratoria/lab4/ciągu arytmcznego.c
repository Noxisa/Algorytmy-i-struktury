// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do obliczenia -tej liczby ciągu arytmcznego
// 2022-11-22
Zadanie 3

Pseudokod

 {
   Aryt(t, o, n){
   if(n > 1)
   return Aryt(t + o, o, n-1){
   }
 else{
   return t;
   }
   }

Kod
float Aryt(float t, float o, float n);

void main(void){

printf("Arytmecznego = %.f\n", Aryt(20,5,10));
}

float Aryt(float t,float o, float n){
if(n > 1){
return Aryt(t + o, o, n-1);
}else
{
return t;
}
return;
}
