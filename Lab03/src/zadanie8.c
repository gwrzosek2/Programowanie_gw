#include <stdio.h>

int isLeapYear(int rok) {
  if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
    return 1;
  } else {
    return 0;
  }
}

int isValidDate(int rok, int miesiac, int dzien) {
  if (rok < 1 || miesiac < 1 || miesiac > 12 || dzien < 1) {
    return 0;
  }
  if ((miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11) &&
      dzien > 30) {
    return 0;
  }
  if (miesiac == 2) {
    if (isLeapYear(rok)) {
      if (dzien > 29) {
	return 0;
      }
    } else {
      if (dzien > 28) {
	return 0;
      }
    }
  } else if (dzien > 31) {
    return 0;
  }
  return 1;
}

int main() {
  int rok1, miesiac1, dzien1, rok2, miesiac2, dzien2;

  printf("Wprowadz pierwszy rok: ");
  scanf("%d", &rok1);
  printf("Wprowadz pierwszy miesiac: ");
  scanf("%d", &miesiac1);
  printf("Wprowadz pierwszy dzien: ");
  scanf("%d", &dzien1);
  printf("Wprowadz drugi rok: ");
  scanf("%d", &rok2);
  printf("Wprowadz drugi miesiac: ");
  scanf("%d", &miesiac2);
  printf("Wprowadz drugi dzien: ");
  scanf("%d", &dzien2);

  if (!isValidDate(rok1, miesiac1, dzien1) ||
      !isValidDate(rok2, miesiac2, dzien2)) {
    printf("Podano niepoprawne daty");
    return 1;
  }
  return 0;
}

// do dokonczenia