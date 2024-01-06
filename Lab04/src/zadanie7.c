#include <math.h>
#include <stdio.h>

int main() {
  int n;

  printf("Podaj Liczbe (n), aby sprawdzic czy jest liczba pierwsza: ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Liczba %d nie jest pierwsza", n);
  }

  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      printf("Liczba %d nie jest pierwsza", n);
      return 0;
    }
  }

  printf("Liczba %d jest pierwsza", n);

  return 0;
}