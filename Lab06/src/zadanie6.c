#include <stdio.h>

int sumOfDigits(int number) {
  if (number <= 0) {
    return 0;
  } else {
    return (number % 10) + sumOfDigits(number / 10);
  }
}

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  printf("Sum of the digits: %d\n", sumOfDigits(number));

  return 0;
}
