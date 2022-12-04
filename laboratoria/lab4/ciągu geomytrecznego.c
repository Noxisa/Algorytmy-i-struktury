// Tomas Chmelevski. Student
// Napisz funkcję rekurencyjną do obliczenia n-tej liczby ciągu geomytrecznego
// 2022-11-22

#Zadanie 4

Pseudokod
 Geom(k,n,o)
 if(n > 1){
  q = k/o
  return  Geom(o,o*q,n - 1)
 else{
 return k
 }

  Kod
  float Geom(float k, float n, float o);
  
  void main(void){

   printf("Geomytrecznego = %.f\n",Geom(8,2,14));
   
  }
  
  float Geom(float k, float n, float o){
   if(n > 1){
    float q = k/o;
    return Geom(k, o * q, n-1);
   }else
   {
return k;
   }
   return;
  }
