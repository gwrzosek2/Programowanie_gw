#include <stdio.h>
#include <string.h>

int main() {
  char str[100];

  printf("Wprowadz slowo: ");
  scanf("%s", str);

  int l = 0;
  int h = strlen(str) - 1;

  while (h > l) {
    if (str[l++] != str[h--]) {
      printf("%s nie jest palinindromem\n", str);
      return 0;
    }
  }

  printf("%s jest palinindromem\n", str);

  return 0;
}