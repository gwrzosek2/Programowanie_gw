#include <stdio.h>

int main() {
  int bok1, bok2, bok3;

  printf("Podaj dlugosc pierwszego boku trojkata: ");
  scanf("%d", &bok1);
  printf("Podaj dlugosc drugiego boku trojkata: ");
  scanf("%d", &bok2);
  printf("Podaj dlugosc trzeciego boku trojkata: ");
  scanf("%d", &bok3);

  if (bok1 + bok2 > bok3 && bok1 + bok3 > bok2 && bok2 + bok3 > bok1) {
    printf("Mozna utworzyc trojkat");
  } else {
    printf("Nie mozna utworzyc trojkata");
  }

  return 0;
}
