#include <stdio.h>

int sumakwadratow(int n) {
  int temp = 0;
  for (int i = 1; i <= n; i++) {
    temp += i * i;
  }

  return temp;
}

int main() {
  int n;

  printf("Podaj liczbe: ");
  scanf("%d", &n);

  printf("Suma kwadratów liczb od 1 do %d (wliczajac 1 i n) wynosi: %d\n", n,
      sumakwadratow(n));
  return 0;
}
