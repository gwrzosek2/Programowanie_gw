#include <stdio.h>

int main() {
   int liczba1, liczba2, suma, roznica, iloczyn, iloraz;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &liczba1);
   printf("Podaj druga liczbe: ");
   scanf("%d", &liczba2);

   suma = liczba1 + liczba2;
   roznica = liczba1 - liczba2;
   iloczyn = liczba1 * liczba2;
   iloraz = liczba1 / liczba2;

   printf("suma: %d\n",suma);
   printf("roznica: %d\n",roznica);
   printf("iloczyn: %d\n",iloczyn);
   printf("iloraz: %d\n",iloraz);
   return 0;
}
