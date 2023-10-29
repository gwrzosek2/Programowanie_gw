#include <stdio.h>

int main() {
   char ch;
   
   printf("Wprowadz znak lub kod: ");
   scanf("%c", &ch);

   if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)){
    printf("Znak: %c jest znakiem z alfabetu", ch);
   }
   else{
    printf("Znak %c nie jest znakiem z alfaetu", ch);
   }

   return 0;
}
