#include <stdio.h>

int main() {
  int i, count, sum;

  count = 0;
  sum = 0;
  for (i = 100; i <= 200; i++) {
    if (i % 9 == 0) {
      count++;
      sum += i;
    }
  }

  printf("Number of integers divisible by 9: %d\n", count);
  printf("Sum of integers divisible by 9: %d\n", sum);

  return 0;
}
