#include <math.h>
#include <stdio.h>

int isPrime(int num) {
  if (num < 2) {
    return 0;
  }

  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int a, b;

  printf("Podaj Liczbe (a): ");
  scanf("%d", &a);

  printf("Podaj Liczbe (b): ");
  scanf("%d", &b);

  printf("%d liczb pierwszych wiekszych od %d:\n", b, a);

  while (b > 0) {
    if (isPrime(a)) {
      printf("%d\n", a);
      b--;
    }
    a++;
  }

  return 0;
}
