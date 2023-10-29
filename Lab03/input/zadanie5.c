#include <stdio.h>

int main() {
   char ch;

   printf("Wprowadz znak lub kod: ");
   scanf("%c", &ch);

   if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ((int)ch >= 97 && (int)ch <= 122) || ((int)ch >= 65 && (int)ch <= 90)){
    printf("Znak: %c jest znakiem z alfabetu", ch);
   }
   else{
    printf("Znak %c nie jest znakiem z alfabetu", ch);
   }

   return 0;
}
