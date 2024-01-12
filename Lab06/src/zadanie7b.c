#include <stdio.h>

int binarySearch(int arr[], int left, int right, int isInArray) {
  if (right >= left) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == isInArray)
      return mid;
    if (arr[mid] > isInArray)
      return binarySearch(arr, left, mid - 1, isInArray);
    return binarySearch(arr, mid + 1, right, isInArray);
  }
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int isInArray = 2;

  int result = binarySearch(arr, 0, size - 1, isInArray);

  if (result >= 0) {
    printf("Liczba %d jest elementem tablicy.\n", isInArray);
  } else {
    printf("Liczba %d nie jest elementem tablicy.\n", isInArray);
  }

  return 0;
}
