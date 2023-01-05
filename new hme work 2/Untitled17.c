#include <stdio.h>

int main() {
  int i, n;
  double sum;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  sum = 0;
  for (i = 1; i <= n; i++) {
    sum += 1.0 / i;
    printf("1/%d ", i);
    if (i < n) {
      printf("+ ");
    }
  }
  printf("= %lf\n", sum);

  return 0;
}


