#include <stdio.h>

int main() {
  int a, b, c = 0, wynik = 1;
  printf("Podaj pierwsza liczbe: ");
  scanf("%d", &a);
  printf("Podaj druga liczbe: ");
  scanf("%d", &b);

  while (wynik <= b) {
    wynik *= a;
    c++;
  }

  printf("Najmniejsza potęga c, dla której a^c > b, wynosi: %d\n", c);

  return 0;
}