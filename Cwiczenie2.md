#Zadanie 1

int loop;
int factorail= 1;
int number = 5;

  for(loop = 1; loop <= number; loop++){
    factorail = factorail * loop;
  }
````````````````````````````
poprawny kod 
/*
Tomas Chmelevski.Student
* -----------------
 Cwiczenie2. Factorial 
* -----------------
2022-10-18
*/
#include <stdio.h>
#include<math.h>

int main(void) {
int loop;
int factorail= 1;
int number = 5;

  for(loop = 1; loop <= number; loop++){
    factorail = factorail * loop;
  }

  printf("Factorial of %d = %d \n", number, factorail);
  

 
}
``````````````````````````````````````````````````````````
#Zadanie 2


int a, b, iloczyn, reszta;
  printf("Podaj pierwsza liczba:");
    scanf("%d", &a);

  printf("Podaj druga liczba:");
  scanf("%d", &b);

  iloczyn = a * b;
  reszt = a % b;

```

/*
Tomas Chmelevski.Student
* -----------------
 Cwiczenie2. Iloczyn i reszta 
* -----------------
2022-10-18
*/
#include <stdio.h>
#include<math.h>

int main(void) {
int a, b, iloczyn, reszta;
  printf("Podaj pierwsza liczba:");
    scanf("%d", &a);

  printf("Podaj druga liczba:");
  scanf("%d", &b);

  iloczyn = a * b;
  reszt = a % b;

  printf("\n to iloczyn  %d.", iloczyn);
  printf("\n to reszta  %d.", reszta);


    return 0;
  }
```
#Zadanie 3
a=10; b=25; c=28;
int sum;
float sred;
sum = a+b+c;
sred = (a+b+c)/3
```
/*
Tomas Chmelevski.Student
* -----------------
 Cwiczenie2. Srednia 
* -----------------
2022-10-18
*/
#include <stdio.h>
#include<math.h>

int main(void) {
int a=10, b=25, c=28;
int sum ;
float  sred ;
scanf("a, b, c");
sum = a + b + c;
printf("sum\n");
sred = (a+b+c)/3;
printf("sred");
  
  
return 0;   
  }
```

















