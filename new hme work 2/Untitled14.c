#include <stdio.h>

int main() {
  int i, j, sum, fact, n;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum = 0;
    fact = 1;
    j = i;
    while (j > 0) {
      fact *= j;
      sum += fact;
      j--;
    }

    if (sum == i) {
      printf("%d is a strong number\n", i);
    }
  }

  return 0;
}
