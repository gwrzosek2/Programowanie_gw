#include <stdio.h>

void zgadnijLiczbe(const int poprawnaLiczba, int pozostaleProby) {
  int przypuszczenie;

  while (pozostaleProby > 0) {
    printf("Zgadnij liczbe z zakresu od 1 do 5: ");
    scanf("%d", &przypuszczenie);

    if (przypuszczenie == poprawnaLiczba) {
      printf("Brawo, zgadles! Szukana liczba to %d\n", poprawnaLiczba);
      return;
    } else {
      printf("Niestety, nie zgadles. Pozostale proby: %d\n", --pozostaleProby);
    }
  }

  printf("Niestety, skonczyly ci sie proby. Liczba ktorej szukales to: %d\n",
      poprawnaLiczba);
}

int main() {
  const int poprawnaLiczba = 2;
  const int iloscProb = 3;

  zgadnijLiczbe(poprawnaLiczba, iloscProb);

  return 0;
}