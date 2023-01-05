#include <stdio.h>

int main() {
  int n, decimal = 0;
  int i = 1;

  printf("Enter a binary number: ");
  scanf("%d", &n);

  for (; n != 0; n /= 10) {
    decimal += (n % 10) * i;
    i *= 2;
  }

  printf("Decimal representation: %d\n", decimal);

  return 0;
}
