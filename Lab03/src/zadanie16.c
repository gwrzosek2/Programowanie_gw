#include <stdio.h>

int main() {
  int liczbyUzytkownika[4];
  int prawidlowaLiczba, liczba, i, j;

  for (i = 0; i < 4; i++) {
    printf("Podaj liczbe od 1 do 5: ");
    scanf("%d", &liczba);
    liczbyUzytkownika[i] = liczba;
    printf("Zla liczba!\n");
  }

  for (prawidlowaLiczba = 1; prawidlowaLiczba <= 5; prawidlowaLiczba++) {
    for (j = 0; j < 4; j++) {
      if (prawidlowaLiczba == liczbyUzytkownika[j])
	break;
    }
    if (j == 4)
      break;
  }

  printf("Prawidlowa liczba to: %d\n", prawidlowaLiczba);

  return 0;
}
