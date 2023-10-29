#include <stdio.h>

int main() {
   int bok_a, bok_b, pole, obwod;
   
   printf("Podaj dlugosc pierwszego boku prostokata: ");
   scanf("%d", &bok_a);
   printf("Podaj dlugosc drugiego boku prostokata: ");
   scanf("%d", &bok_b);
   
   pole = bok_a * bok_b;
   obwod = (bok_a * 2) + (bok_b * 2);

   printf("Twoj prostokat:\nBok a: %d \nBok b: %d\nPole: %d\nObwod: %d",bok_a, bok_b, pole, obwod);

   return 0;
}

// do dokonczenia