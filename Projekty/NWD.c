
#include <stdio.h>

int NWD(int a, int b) {
  if (b == 0)
    return a;
  else
    return NWD(b, a % b);
}

int main(void) {
  int a, b;

  printf("Wpisz dwie liczby całkowite: ");
  scanf("%d%d", &a, &b);

  printf("NWD %d i %d to %d.\n", a, b, NWD(a, b));

  return 0;
}

