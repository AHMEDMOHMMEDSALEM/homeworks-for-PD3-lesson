#include <stdio.h>
#include <math.h>

int main() {
  double x, sum, term;
  int i;

  printf("Enter the value of x: ");
  scanf("%lf", &x);

  sum = 1;
  term = 1;
  for (i = 1; fabs(term) > 1e-6; i++) {
    term *= x / i;
    sum += term;
  }

  printf("Sum of the series = %lf\n", sum);

  return 0;
}





