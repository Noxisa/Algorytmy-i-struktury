### Kod NWD
```
#include <stdio.h>

int nwd(int a, int b) {
  int c;
  while (b) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

int main(void) {
  int a, b;

  printf("podaj liczby: ");
  scanf("%d %d", &a, &b);

  printf("nww: %d\n", (a * b) / nwd(a, b));

  return 0;
}

```
