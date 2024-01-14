#include <stdio.h>

struct punkt {
  int x;
  int y;
};

int main() {
  struct punkt p1 = {10, 22};
  struct punkt p2 = {6, 12};

  printf("--------------------------------------------\n");
  printf("Pierwszy Punkt: (X: %d Y: %d)\n", p1.x, p1.y);
  printf("--------------------------------------------\n");
  printf("Drugi Punkt: (X: %d Y: %d)\n", p2.x, p2.y);
  printf("--------------------------------------------\n");
  return 0;
}