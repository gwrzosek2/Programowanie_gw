#include <stdio.h>

int main() {
  int rok;

  printf("Wprowadz rok: ");
  scanf("%d", &rok);

  if (rok % 4 == 0) {
    printf("Rok %d jest przestepny", rok);
  } else {
    printf("Rok %d nie jest przestepny", rok);
  }

  return 0;
}
