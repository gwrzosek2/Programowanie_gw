#include <stdio.h>
#include <string.h>

int isPalindrome(char *s, int start, int end) {
  if (start >= end) {
    return 1;
  }
  if (s[start] == s[end]) {
    return isPalindrome(s, start + 1, end - 1);
  } else {
    return 0;
  }
}

int main() {
  char word[100];
  printf("Podaj slowo: ");
  scanf("%s", word);
  if (isPalindrome(word, 0, strlen(word) - 1)) {
    printf("Słowo jest palindromem.\n");
  } else {
    printf("Słowo nie jest palindromem.\n");
  }

  return 0;
}