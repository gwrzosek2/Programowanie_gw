#include <stdio.h>

struct trojkat {
  int a;
  int b;
  int c;
};

void isValidTriangle(int a, int b, int c) {
  if (a + b <= c || a + c <= b || b + c <= a)
    printf("Trojkat jest niepoprawny");
  else
    printf("Trojkat jest poprawny");
}

int main() {
  struct trojkat t1 = {30, 10, 5};
  struct trojkat t2 = {6, 12, 7};

  printf("--------------------------------------------\n");
  printf("Pierwszy Trojkat: (a: %d b: %d c: %d)\n", t1.a, t1.b, t1.c);
  isValidTriangle(t1.a, t1.b, t1.c);
  printf("\n--------------------------------------------\n");
  printf("Drugi Trojkat: (a: %d b: %d c: %d)\n", t2.a, t2.b, t2.c);
  isValidTriangle(t2.a, t2.b, t2.c);
  printf("\n--------------------------------------------\n");
  return 0;
}