#include <stdio.h>

int main() {

  int liczba;

  printf("Podaj Liczbe: ");
  scanf("%d", &liczba);

  if (liczba % 2 == 0) {
    printf("2");
    return 0;
  } else if (liczba % 3 == 0) {
    printf("3");
    return 0;
  } else if (liczba % 4 == 0) {
    printf("4");
    return 0;
  } else if (liczba % 5 == 0) {
    printf("5");
    return 0;
  } else if (liczba % 6 == 0) {
    printf("6");
    return 0;
  } else {
    printf("Podana Liczba nie dzieli sie przez zadna liczbe z zakresu 2-6.");
  }

  return 0;
}