//Tomas Chmelevski. Student
// Algorytmow śledzenia wstecznego
// 2023.01.24


minCoins(coinList, n, value)

Wejście: lista różnych monet, liczba monet, podana wartość.

Dane wyjściowe: Minimalna liczba monet, aby uzyskać daną wartość.

Pseudokod
```
function minCoins(coinList, n, value) {
  S[MAX_INT];
  C = sort(coinList);
  j=0;
  for (i = n - 1; i >= 0; i--) {
while (value >= C[i]) {
	S[j] = C[i];
	value = value - C[i];
j++;	
}
if (n == 0) {
	break;
}
  }
  if (value > 0) return 1;
  return S;	
}
```
Efektywne rozwiązanie zadania minimalna liczba monet, które tworzą daną wartość. Po pierwsze trzeba znaleźć minimalnie możliwa ilość monet. 

Wejście: coins[] = {25, 10, 5}, V = 30
Wyjście: Wymagane są co najmniej 2 monety. Możemy użyć jednej monety o nominale 25 centów i jednej o nominale 5 centów

Wejście: coins[] = {9, 6, 5, 1}, V = 11
Wyjście: Wymagane minimum 2 monety Możemy użyć jednej monety o nominale 6 centów i 1 monety o nominale 5 centów


Minimalną liczbę monet dla wartości V można obliczyć za pomocą poniższego wzoru rekurencyjnego.

Pseudokod
```
function minCoinsCount(coinList, n, value) {
  if (value == 0) {
	return 0;
  }

  int res = INT_MAX;
	
  for (i = 0; i < n; i++) {
if (coinList[i] <= value) {
	subRes = minCoinsCount(coinList, n, value - coinList[i])

if (subRes != INT_MAX && subRes + 1 < res) {
	res = subRes + 1;
}
}
  }
  return res;
}
```
Lub z używaniem dodatkowej tablicy:
```
function minCoinsCount(coinList, n, value) {
  int table[value + 1];
  for (i = 0; i < value; i++) table[i] = INT_MAX;
	
  for (i = 0; i < value; i++) {
for (j = 0; j < n; j++) {
if (coinList[j] <= i) {
	subRes = table[i - coinsList[j]]

if (subRes != INT_MAX && subRes + 1 < table[i]) {
	table[i] = subRes + 1;
}
}
}
  }
  if (table[value] == INT_MAX) return -1; 
	
  return table[value];
}
```
Pseudokod
```
Function minCoins(coinList, n, value, dp) {
  if (dp[value] != -1) return dp[value];
  
  coinsRequired = INT_MAX;	
  for (i = 0; i < l; i++) {
if (coinList[i] <= value) {
	subRes = minCoins(coinList, n, value - coinsList[i], dp);
if (subRes != INT_MAX && subRes + 1 < coinsRequired) {
	coinsRequired = subRes + 1;
}
}

  }
  dp[value] = coinsRequired;
	
  return coinsRequired;
}

```
Pseudokod
```
function coinChange(coinList, n, value, dp) {
  coinsRequired = minCoins(coinList, n, value, dp);
  
  if(coinsRequired == INT_MAX) {
	return -1;
  }	
  return coinsRequired;
}


```
