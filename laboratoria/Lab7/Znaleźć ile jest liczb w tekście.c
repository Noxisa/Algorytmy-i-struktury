// Tomas Chmelevski. Student
// Znaleźć ile jest liczb w tekście
// 2023-01-23
#include <stdio.h>
#define STR_MAX_LENGTH 1000
int main(void)
{
    char s[STR_MAX_LENGTH];
    int c=0,j;
    printf("Napisz slowo: ");
     
    for(j = 0; s[j] != '\0'; j++)
    {
        if(s[j]=='0' || s[j]=='1'|| s[j]=='2'||
        s[j]=='3'|| s[j]=='4'|| s[j]=='5'||
        s[j]=='6'|| s[j]=='7'|| s[j]=='8'|| s[j]=='9')
        c++;
    }
    printf("\nLiczba cyfr w ciągu = %d", c);
    return 0;
}
