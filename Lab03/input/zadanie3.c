#include <stdio.h>

int main() {
   int liczba1, liczba2;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &liczba1);
   printf("Podaj druga liczbe: ");
   scanf("%d", &liczba2);

   if(liczba1 > liczba2){
    printf("liczba 1: %d jest wieksza od liczby: %d", liczba1, liczba2);
   }
   else if(liczba1 < liczba2){
    printf("liczba 2: %d jest wieksza od liczby: %d", liczba2, liczba1);
   }
   else{
    printf("liczby %d i %d sa jednakowe", liczba1, liczba2);
   }

   return 0;
}
