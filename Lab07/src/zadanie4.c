#include <stdio.h>

void zamienNajwiekszy(int tablica[], int rozmiar) {
  int *najwiekszaWartosc = &tablica[0];

  for (int i = 0; i < rozmiar - 1; i++) {
    if (tablica[i] > *najwiekszaWartosc) {
      najwiekszaWartosc = &tablica[i];
    }
  }
  printf("Najwieksza wartosc tablicy to: %d\n", *najwiekszaWartosc);
  *najwiekszaWartosc = 0;
}

int main() {
  int tablica[] = {1, 22, 3, 4, 15, 333, 7, 8, 95, 10};
  int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
  zamienNajwiekszy(tablica, rozmiar);
  for (int i = 0; i < rozmiar; i++) {
    printf("%d\n", tablica[i]);
  }
  return 0;
}