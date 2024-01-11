#include <stdio.h>

void selectionSort(int arr[], int n) {
  int minIndex, temp;
  for (int i = 0; i < n - 1; i++) {
    minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
	minIndex = j;
      }
    }
    temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
}

int main() {
  int arr[] = {1, 3, 2, 4, 5, 7, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}