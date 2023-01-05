#include <stdio.h>
#include <math.h>

int main() {
  double x, sum, term;
  int i;

  printf("Enter the value of X: ");
  scanf("%lf", &x);

  sum = 1;
  term = 1;
  for (i = 2; term > 1e-6; i += 2) {
    term *= -x * x / i / (i - 1);
    sum += term;
  }

  printf("Sum of the series = %lf\n", sum);

  return 0;
}
