#include <stdio.h>

void insertionSort(int arr[], int arrLength) {
  for (int i = 1; i < arrLength; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int arr[] = {1, 5, 3, 2, 6, 4};
  int arrLength = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, arrLength);
  for (int i = 0; i < arrLength; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}