//Tomas Chmelevski. Student
// Minimalną liczbę monet dla wartości V można obliczyć za pomocą poniższego wzoru rekurencyjnego.
// 2023.02.03

#include <stdio.h>
#include <limits.h>

int minCoins(int coins[], int m, int V)
{
int table[V+1];
table[0] = 0;
int i, j;
for (i=1; i<=V; i++)
table[i] = INT_MAX;
for (i=1; i<=V; i++)
{
for (j=0; j<m; j++)
if (coins[j] <= i)
{
int sub_res = table[i-coins[j]];
if (sub_res != INT_MAX && sub_res + 1 < table[i])
table[i] = sub_res + 1;
}
}
return table[V];
}

int main(void)
{
int coins[] = {25, 10, 5};
int m = sizeof(coins)/sizeof(coins[0]);
int V = 30;
printf("Wymagana minimalna liczba monet: %d", minCoins(coins, m, V));
return 0;
  }
