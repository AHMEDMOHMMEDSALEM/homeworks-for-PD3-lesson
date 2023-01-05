#include <stdio.h>
#include <math.h>

int main() {
  int n;
  double sum;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  sum = (1.0 - pow(10, -n)) / (1.0 - pow(10, -1));
  printf("Sum of the series = %lf\n", sum);

  return 0;
}
