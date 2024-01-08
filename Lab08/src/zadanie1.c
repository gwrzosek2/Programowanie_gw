#include <stdbool.h>
#include <stdio.h>

int main() {
  int arr[] = {1, 4, 5, 7, 99, 22, 11, 3, 5, 10};
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  int index = 0;
  bool result = false;
  int n;

  printf("Podaj liczbe ktorej szukasz w tablicy %d elementowej: ", arrSize);
  scanf("%d", &n);

  while (index <= n) {
    if (arr[index] == n) {
      result = true;
    }
    index++;
  }

  printf("%s\n", result ? "True" : "False");

  return 0;
}