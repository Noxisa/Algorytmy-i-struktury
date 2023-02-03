// Sebatian Pavlovic
// odczas znajdowania minimalnej liczby monet można zastosować śledzenie wsteczne, 
// aby śledzić monety potrzebne, aby ich suma była równa X. Wykonajmy poniższe kroki, aby rozwiązać problem:
// 2023-02-03


#include <stdio.h>
#include <stdlib.h>

#define MAX_SUM 100
#define MAX_COINS 100

int dp[MAX_SUM + 1];
int coins[MAX_COINS];
int chosen[MAX_SUM + 1];

int min_coins(int sum, int n) {
int i, j;
for (i = 1; i <= sum; i++) {
dp[i] = 1000000;
for (j = 0; j < n; j++) {
if (i >= coins[j]) {
if (dp[i - coins[j]] + 1 < dp[i]) {
dp[i] = dp[i - coins[j]] + 1;
chosen[i] = coins[j];
}
}
}
}
return dp[sum];
}

void print_coins(int sum) {
if (sum == 0) {
return;
}
printf("%d ", chosen[sum]);
print_coins(sum - chosen[sum]);
}

int main(int argc, char *argv[]) {
int sum, n, i;
printf("Wprowadź sumę: ");
scanf("%d", &sum);
printf("Wprowadź liczbę monet: ");
scanf("%d", &n);
printf("Wprowadź wartości monet: ");
for (i = 0; i < n; i++) {
scanf("%d", &coins[i]);
}
int min = min_coins(sum, n);
printf("Minimalna liczba monet: %d\n", min);
printf("Monety używane: ");
print_coins(sum);
printf("\n");
return 0;
}



