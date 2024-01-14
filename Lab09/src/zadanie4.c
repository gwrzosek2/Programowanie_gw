#include <stdio.h>

struct punkt {
  int x;
  int y;
};

void obliczRownanieProstej(struct punkt p1, struct punkt p2) {
  float m = (float)(p2.y - p1.y) / (p2.x - p1.x);

  float c = p1.y - m * p1.x;

  printf("Równanie prostej: y = %.2fx + %.2f\n", m, c);
}

int main() {
  struct punkt p1 = {3, 4};
  struct punkt p2 = {5, 8};

  printf("--------------------------------------------\n");
  printf("Pierwszy Punkt: (x: %d y: %d)\n", p1.x, p1.y);
  printf("--------------------------------------------\n");
  printf("Drugi Punkt: (x: %d y: %d)\n", p2.x, p2.y);
  printf("--------------------------------------------\n");
  obliczRownanieProstej(p1, p2);
  printf("--------------------------------------------\n");
  return 0;
}