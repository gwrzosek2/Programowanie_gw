#include <stdio.h>

struct klient {
  char imie[100];
  char nazwisko[100];
  int nrTelefonu;
};

int main() {
  struct klient k1 = {"Bozenka", "Kowalska", 783999222};
  struct klient k2 = {"Andzej", "Kowalski", 888222333};

  printf("--------------------------------------------\n");
  printf("Pierwszy klient:\nImie: %s\nNazwisko: %s\nNumer telefonu: %d\n",
      k1.imie, k1.nazwisko, k1.nrTelefonu);
  printf("--------------------------------------------\n");
  printf("Drugi klient:\nImie: %s\nNazwisko: %s\nNumer telefonu: %d\n", k2.imie,
      k2.nazwisko, k2.nrTelefonu);
  printf("--------------------------------------------\n");
  return 0;
}