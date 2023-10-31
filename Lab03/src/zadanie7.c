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
  int rok, miesiac, dzien;

  printf("Wprowadz rok: ");
  scanf("%d", &rok);
  printf("Wprowadz miesiac: ");
  scanf("%d", &miesiac);
  printf("Wprowadz dzien: ");
  scanf("%d", &dzien);

  if (isValidDate(rok, miesiac, dzien)) {
    printf("Podana data jest poprawna");
  } else {
    printf("Podana data jest niepoprawna");
  }

  return 0;
}
