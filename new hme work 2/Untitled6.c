#include <stdio.h>

int main() {
  int a, b, lcm;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  int gcd = 1;
  int i;
  for (i = 2; i <= a && i <= b; i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }

  lcm = (a * b) / gcd;
  printf("The LCM of %d and %d is %d\n", a, b, lcm);

  return 0;
}
