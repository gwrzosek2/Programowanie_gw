#include <stdio.h>

void printDashes(int numberOfDashes) {
  printf("|");
  for (int i = 0; i < numberOfDashes; i++) {
    printf("-");
  }
  printf("|\n");
}

int main() {
  int arr[4][3] = {{1, 0, 1}, {0, 1, 0}, {1, 0, 0}, {1, 1, 0}};

  int rows = sizeof(arr) / sizeof(arr[0]);
  int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

  printDashes(cols);
  for (int i = 0; i < rows; i++) {
    printf("|");
    for (int j = 0; j < cols; j++) {
      if (arr[i][j] == 1) {
	printf("x");
      } else {
	printf(" ");
      }
    }
    printf("|\n");
  }
  printDashes(cols);
  return 0;
}