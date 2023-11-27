#include <math.h>
#include <stdio.h>

double stopnieNaRadiany(int wartoscKata) {
  return ((wartoscKata * M_PI) / 180);
}

int main() {
  int wartoscKata;
  printf("Podaj wartosc kata: ");
  scanf("%d", &wartoscKata);
  printf("%lf", stopnieNaRadiany(wartoscKata));
  return 0;
}