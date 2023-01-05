#include <stdio.h>
#include <math.h>

int main() {
  double x, sum, term;
  int i;

  printf("Enter the value of x: ");
  scanf("%lf", &x);

  sum = x;
  term = x;
  for (i = 3; fabs(term) > 1e-6; i += 2) {
    term *= -x * x / (i - 1) / i;
    sum += term;
  }

  printf("Sum of the series = %lf\n", sum);

  return 0;
}
