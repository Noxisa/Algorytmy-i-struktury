Kod Algorytm Knutha-Morrisa-Pratta wyszukiwania wzorca.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void computeLPSArray(char *pat, int M, int *lps);

void KMPSearch(char *pat, char *txt) {
  int M = strlen(pat);
  int N = strlen(txt);

  int *lps = (int *)malloc(sizeof(int) * M);
  int j = 0;

  computeLPSArray(pat, M, lps);

  int i = 0;
  while (i < N) {
    if (pat[j] == txt[i]) {
      j++;
      i++;
    }

    if (j == M) {
      printf("Znaleziono wzór w index %d \n", i - j);
      j = lps[j - 1];
    }

    else if (i < N && pat[j] != txt[i]) {

      if (j != 0)
        j = lps[j - 1];
      else
        i = i + 1;
    }
  }
  free(lps);
}

void computeLPSArray(char *pat, int M, int *lps) {
  int len = 0;
  int i;

  lps[0] = 0;
  i = 1;

  while (i < M) {
    if (pat[i] == pat[len]) {
      len++;
      lps[i] = len;
      i++;
    } else {
      if (len != 0) {

        len = lps[len - 1];

      } else {
        lps[i] = 0;
        i++;
      }
    }
  }
}

int main() {
  char *txt = "ABABDABACDABABCABAB";
  char *pat = "ABABCABAB";
  KMPSearch(pat, txt);
  return 0;
}
