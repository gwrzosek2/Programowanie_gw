#include <stdio.h>

int obliczSilnie(int n) {
  if (n < 2) {
    return 1;
  }

  return n * obliczSilnie(n - 1);
}

int main() {
  int n;

  printf("Podaj silnie ktora chcesz obliczyc: ");
  scanf("%d", &n);
  printf("Silnia z %d wynosi: %d\n", n, obliczSilnie(n));

  return 0;
}