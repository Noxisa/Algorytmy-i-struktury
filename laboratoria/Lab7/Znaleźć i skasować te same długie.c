// Tomas Chmelevski. Student
// Znaleźć i skasować te same długie słowo w tekście
// 2023-01-23

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STR_LEN 256
#define MAX_WORDS 64
#define WORD_LENGTH 64

int main(void)
{

    char str[STR_LEN];
    char words[MAX_WORDS][WORD_LENGTH];

    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    printf("Napisz slowa: ");
    scanf("%[^\n]s", str);

    while (str[i] != 0) {
        if (str[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        else {
            words[k][j] = str[i];
            j++;
        }
        i++;
    }
    words[k][j] = '\0';

    j = 0;
    for (i = 0; i < k; i++) {
        int present = 0;
        for (l = 1; l < k + 1; l++) {
            if (words[l][j] == '\0' || l == i)
                continue;

            if (strcmp(words[i], words[l]) == 0) {
                words[l][j] = '\0';
                present = present + 1;
            }
        }
    }

    j = 0;
    printf("Wynik jest:\n");
    for (i = 0; i < k + 1; i++) {
        if (words[i][j] == 0)
            continue;
        else
            printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
