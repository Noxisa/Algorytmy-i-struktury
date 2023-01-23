// Tomas Chmelevski. Student
// Wyprowadzić wszystkie nie powtarzające się słowa
// 2023-01-23

#include <stdio.h>
int main()
{
    
    char str[100];
    int i;
    int freq[256] = {0};
    printf(" Program do wyszukiwania wszystkich nie powtarzających się znaków\n");
    printf("\nWprowadź ciąg: ");
    scanf("%[^\n]",str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    printf("Postacie, które nie mają powtórzeń są: \n");
    for(i = 0; i < 256; i++)
    {
      
        if(freq[i] == 1)
        {
            printf("%c ", i);
        }
    }
    return 0;
}
