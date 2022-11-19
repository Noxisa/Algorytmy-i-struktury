/*
Tomas Chmelevski.Student
* -----------------
 Laboratorium 1. Zadanie Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n)
* -----------------
2022-10-11
*/

#include <stdio.h>
#include <math.h>

int main(void){
    int n;
  printf("Podaj dlugosc tablicy:");
  scanf("%d",&n);

  double a, x[n];

  printf("Podaj a:");
  scanf("%lf", &a);
  for(int i = 0; i < n; i++){
    printf("Podaj x%d",i+1);
    scanf("%lf",&x[i]);
  }
  for(int i = 0; i < n; i++){
    printf("%.1lf = %.1lf * %.1lf ^ 2 \n",(a*x[i]*x[i]), a, x[i]);
  }
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
