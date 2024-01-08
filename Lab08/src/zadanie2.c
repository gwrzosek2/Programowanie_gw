#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
  int arr[] = {1, 2, 4, 5, 7, 9, 11, 22};
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  int left = 1;
  int right = arrSize - 1;
  int middle;
  bool result = false;
  int num;

  printf("Podaj n: ");
  scanf("%d", &num);
  printf("n: %d\n", num);

  while (left <= right) {
    middle = floor((left + right) / 2);
    printf("%d\n", middle);

    if (arr[middle] < num) {
      left = middle + 1;
    } else if (arr[middle] > num) {
      right = middle - 1;
    } else {
      result = true;
      break;
    }
  }

  printf("%s\n", result ? "True" : "False");

  return 0;
}