#include <stdio.h>

int algorytmEuklidesa(int a, int b) {
  if (a < b) {
    int temp = a;
    a = b;
    b = temp;
  }
  if (b == 0) {
    return a;
  }

  return algorytmEuklidesa(b, a % b);
}

int main() {
  int a, b;
  printf("Podaj a: ");
  scanf("%d", &a);
  printf("Podaj b: ");
  scanf("%d", &b);
  printf("Najwiekszy wspolny dzielnik to: %d\n", algorytmEuklidesa(a, b));

  return 0;
}