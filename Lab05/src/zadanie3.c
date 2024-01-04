#include <stdio.h>

char GetCharAtIndex(char s[], int i) { return s[i]; }

int main() {
  printf("%c", GetCharAtIndex("Test", 2));
  return 0;
}
