// Tomas Chmelevski. Student
// Znaleźć ile jest liczb w tekście
// 2023-01-23
#include <stdio.h>
#include <string.h>
#define STR_MAX_LENGTH 1000
 
int main(void)
{
    char s[STR_MAX_LENGTH];
    int count = 0, i;
 
    printf("Napisz slowo:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Liczba cyfr w ciągu: %d\n", count + 1);

  }
