#include <stdio.h>

void bubbleSort(int arr[], int arrLength) {
  for (int i = 0; i < arrLength - 1; i++) {
    for (int j = 0; j < arrLength - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
	int temp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = temp;
      }
    }
  }
}

int main() {

  int arr[] = {1, 5, 4, 2, 3, 6, 8, 7};
  int arrLength = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, arrLength);

  for (int i = 0; i < arrLength; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}