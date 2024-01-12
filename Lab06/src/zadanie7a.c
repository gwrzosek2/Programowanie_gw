#include <stdio.h>

int linearSearch(int arr[], int left, int right, int isInArray) {
  if (left > right) {
    return 0;
  }
  if (arr[left] == isInArray) {
    return 1;
  }
  return linearSearch(arr, left + 1, right, isInArray);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int isInArray = 2;

  int result = linearSearch(arr, 0, size - 1, isInArray);

  if (result) {
    printf("Liczba %d jest elementem tablicy.\n", isInArray);
  } else {
    printf("Liczba %d nie jest elementem tablicy.\n", isInArray);
  }

  return 0;
}