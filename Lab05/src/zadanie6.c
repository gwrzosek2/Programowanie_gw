#include <stdio.h>

int findIntersectionEnd(int a1, int b1, int a2, int b2) {
  int a3 = (a1 > a2) ? a1 : a2;
  int b3 = (b1 < b2) ? b1 : b2;
  if (a3 <= b3) {
    return b3;
  } else {
    return -1;
  }
}

int main() {
  int a1 = 3;
  int b1 = 9;
  int a2 = 5;
  int b2 = 12;

  int result = findIntersectionEnd(a1, b1, a2, b2);

  if (result != -1) {
    printf("Koniec przekroju istnieje, wynosi: %d\n", result);
  } else {
    printf("Przekrój jest zbiorem pustym\n");
  }

  return 0;
}