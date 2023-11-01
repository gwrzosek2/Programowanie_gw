#include <stdbool.h>
#include <stdio.h>

void bubbleSort(int arr[], int n) {
  int temp;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
	temp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = temp;
      }
    }
  }
}

bool trojkatProstokatny(int a, int b, int c) {
  int boki[3] = {a, b, c};
  bubbleSort(boki, 3);

  return (boki[0] * boki[0] + boki[1] * boki[1] == boki[2] * boki[2]);
}

int main() {
  int bok1, bok2, bok3;

  printf("Podaj dlugosc pierwszego boku trojkata: ");
  scanf("%d", &bok1);
  printf("Podaj dlugosc drugiego boku trojkata: ");
  scanf("%d", &bok2);
  printf("Podaj dlugosc trzeciego boku trojkata: ");
  scanf("%d", &bok3);

  if (trojkatProstokatny(bok1, bok2, bok3)) {
    printf("+ | Mozna stworzyc trojkat prostokatny");
  } else {
    printf("- | Nie mozna stworzyc trójkata prostokatnego");
  }

  return 0;
}