#include <stdio.h>

int main() {
  int liczba1, liczba2, liczba3;

  printf("Podaj pierwsza liczbe: ");
  scanf("%d", &liczba1);
  printf("Podaj druga liczbe: ");
  scanf("%d", &liczba2);
  printf("Podaj trzecia liczbe: ");
  scanf("%d", &liczba3);

  if (liczba1 > liczba2 && liczba1 > liczba3) {
    printf("liczba 1: %d jest najwieksza", liczba1);
  } else if (liczba2 > liczba1 && liczba2 > liczba3) {
    printf("liczba 2: %d jest najwieksza", liczba2);
  } else {
    printf("liczba 3: %d jest najwieksza", liczba3);
  }

  return 0;
}
