/*
Tomas Chmelevski.Student
* -----------------
 Laboratorium 1. Zadanie Obliczyc funkcja y = ax^2 znaczenia, gdy a ir x zmeniajan sie jednoczesnie: a z 1 krokiem 0.5, x - z 2 do 6 krokiem 2
* -----------------
2022-10-11
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double x = 2, a = 1;
    float y;

  while(x<=6){
  printf("x=%.f  a=%.f ",x,a);
    y = a*x*x;
    a = a + 0.5;
    x = x + 2.0; 
    printf("y=%.f\n",y);
  }


  
}
