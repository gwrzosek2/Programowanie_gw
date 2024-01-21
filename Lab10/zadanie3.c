#include <stdio.h>
#include <ctype.h>

int main(){

    char nazwaPliku[100];
    printf("Podaj nazwe pliku: ");
    scanf("%s",nazwaPliku);

    FILE *plik = fopen(nazwaPliku,"r");

    if(plik != NULL){
        char znak;
        while(znak = fgetc(plik) != EOF){
            putchar(toupper(znak));
        }
        fclose(plik);
    }
    else{
        printf("Nie udalo sie znalezc pliku\n");
    }

    return 0;
}