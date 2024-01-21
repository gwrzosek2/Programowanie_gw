#include <stdio.h>

int main(){
    FILE *plik = fopen("plik.txt","r");

    plik != NULL ? printf("Plik istnieje\n") : printf("Plik nie istnieje\n");

    fclose(plik);
    return 0;
}