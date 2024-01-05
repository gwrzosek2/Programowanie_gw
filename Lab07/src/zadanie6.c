#include <stdio.h>

void fillArr(int *first, int *last) {
  for (int *f = first; f <= last; f++) {
    *f = f - first + 1;
  }
}

int main() {
  int arrLength = 10;
  int arr[arrLength];

  fillArr(arr, arr + (arrLength - 1));

  for (int i = 0; i < arrLength; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
