#include <stdio.h>

void zwrocKwadratyLiczbTablicy(int liczby[], int rozmiar) {
  for (int i = 0; i < rozmiar; i++) {
    printf("%d ", liczby[i] * liczby[i]);
  }
}

int main() {
  int liczby[] = {1, 2, 3, 4, 5};
  int rozmiar = sizeof(liczby) / sizeof(liczby[0]);
  zwrocKwadratyLiczbTablicy(liczby, rozmiar);
  return 0;
}