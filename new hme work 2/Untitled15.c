#include <stdio.h>

int main(void) {
  int num, temp, reversed = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  temp = num;
  while (temp != 0) {
    reversed = reversed * 10 + temp % 10;
    temp /= 10;
  }

  if (reversed == num) {
    printf("The number is a palindrome number\n");
  } else {
    printf("The number is not a palindrome number \n");
  }

  return 0;
}
