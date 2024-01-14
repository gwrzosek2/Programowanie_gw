#include <stdio.h>

int suma(int liczba1, int liczba2) { return liczba1 + liczba2; }

int roznica(int liczba1, int liczba2) { return liczba1 - liczba2; }

int iloczyn(int liczba1, int liczba2) { return liczba1 * liczba2; }

int iloraz(int liczba1, int liczba2) { return liczba1 / liczba2; }

int main() {
  int liczba1, liczba2, operacja;

  printf("Podaj pierwsza liczbe: ");
  scanf("%d", &liczba1);
  printf("Podaj druga liczbe: ");
  scanf("%d", &liczba2);
  printf("Wybierz operacje na liczbach (%d oraz %d):\n", liczba1, liczba2);
  printf("1: suma\n");
  printf("2: roznica\n");
  printf("3: iloczyn\n");
  printf("4: iloraz\n");
  scanf("%d", &operacja);

  switch (operacja) {
  case 1: {
    printf("suma liczb %d i %d wynosi: %d\n", liczba1, liczba2,
        suma(liczba1, liczba2));
    break;
  }
  case 2: {
    printf("roznica liczb %d i %d wynosi: %d\n", liczba1, liczba2,
        roznica(liczba1, liczba2));
    break;
  }
  case 3: {
    printf("iloczyn liczb %d i %d wynosi: %d\n", liczba1, liczba2,
        iloczyn(liczba1, liczba2));
    break;
  }
  case 4: {
    printf("iloraz liczb %d i %d wynosi: %d\n", liczba1, liczba2,
        iloraz(liczba1, liczba2));
    break;
  }
  default: {
    printf("niepoprawna wprowadzona wartosc");
  }
  }

  return 0;
}
