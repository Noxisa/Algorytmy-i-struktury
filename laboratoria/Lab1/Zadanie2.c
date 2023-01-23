/*
Tomas Chmelevski.Student
* -----------------
 Laboratorium 1. Zadanie Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale. x - zmieniase z x0 do xn, krokiem hx
* -----------------
2022-10-11
*/

#include <stdio.h>
#include <math.h>

int main(void){
  double x, a, xn,  hx=0;

  printf("Podaj a:");
  scanf("%lf",&a);
  printf("Podaj x0:");
  scanf("%lf",&x);
  printf("Podaj xn:");
  scanf("%lf",&xn);
    while(hx<=0){
  printf("Podaj dodatnia liczba hx:");
  scanf("%lf",&hx);
    }
    while(x<=xn){
       printf("%.1lf = %.1lf * %.1lf ^ 2 \n",(a*x*x), a, x);
      x = x+hx; 
    }
  
}
