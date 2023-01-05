#include <stdio.h>

int main() {
  int n, binary = 0;
  int i = 1;

  printf("Enter a decimal number: ");
  scanf("%d", &n);

  while (n != 0) {
    binary += (n % 2) * i;
    n /= 2;
    i *= 10;
  }

  printf("Binary representation: %d\n", binary);

  return 0;
}



