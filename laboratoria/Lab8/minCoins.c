//Tomas Chmelevski. Student

// Algorytmow śledzenia wstecznego

// 2023.02.03


#include <limits.h>
#include <stdio.h>

int minCoins(int coinList[], int n, int value) {
  int s[value + 1];

  s[0] = 0;
  for (int i = 1; i <= value; i++) {
    s[i] = INT_MAX;
  }

  for (int i = 1; i <= value; i++) {
    for (int j = 0; j < n; j++) {
      if (coinList[j] <= i) {
        int sub_res = s[i - coinList[j]];
        if (sub_res != INT_MAX && sub_res + 1 < s[i]) {
          s[i] = sub_res + 1;
        }
      }
    }
  }

  return s[value];
}

int main() {
  int coinList[] = {1, 2, 5};
  int n = sizeof(coinList) / sizeof(coinList[0]);
  int value = 11;
  printf("Minimalna liczba monet potrzebnych do wymiany %d jest %d\n", value, minCoins(coinList, n, value));
  return 0;
}
