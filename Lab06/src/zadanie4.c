#include <stdio.h>

int ciagFibonacciego(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1 || n == 2) {
    return 1;
  }

  return ciagFibonacciego(n - 2) + ciagFibonacciego(n - 1);
}

int main() {
  int n;
  printf("Podaj n-ty wyraz ciagu fibonacciego: ");
  scanf("%d", &n);
  printf("%d\n", ciagFibonacciego(n));

  return 0;
}