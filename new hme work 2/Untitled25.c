#include <stdio.h>

int main(void) {
  int i, j, n;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d ", combination(i, j));
    }
    printf("\n");
  }

  return 0;
}

int combination(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  } else {
    return combination(n - 1, k - 1) + combination(n - 1, k);
  }
}






