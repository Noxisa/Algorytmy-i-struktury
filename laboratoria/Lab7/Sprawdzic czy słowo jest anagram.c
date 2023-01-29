// Tomas Chmelevski. Student
// Sprawdzic czy słowo jest anagram
// 2023-01-23

#include <stdio.h>
#include <string.h>
#define MAX_WORD_LENGTH 50

int is_anagram(char a[], char b[]) { 
 
  if (strlen(a) != strlen(b)) {
    return 0;
  }

  int i = 0;
  int freq_a[26] = {0};
  int freq_b[26] = {0};
  
  for (i = 0; a[i] && b[i]; i++) {
    freq_a[a[i] - 97]++;
    freq_b[b[i] - 97]++;
  }
  
  for (i = 0; i < 26; i++) {
    if (freq_a[i] != freq_b[i]) {
      return 0;
    }
  }

  return 1;
}

int main(void) {
  char a[MAX_WORD_LENGTH], b[MAX_WORD_LENGTH];

  printf("Wprowadź pierwszy ciąg : ");
  scanf("%s", a); 

  printf("Wprowadź drugi ciąg: ");
  scanf("%s", b); 
  
  if (is_anagram(a, b) == 1) {
    printf("Dwie struny są dla siebie anagramami");
  } else {
    printf("Dwie struny nie są dla siebie anagramami");
  }

  return 0;
}
