#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *plik = fopen("liczby.txt","r");

    if(plik != NULL){
        FILE *parzyste = fopen("parzyste.txt", "w");
        FILE *nieparzyste = fopen("nieparzyste.txt", "w");
        int liczba;
        while(fscanf(plik), "%d", &liczba){
            if(liczba % 2 == 0){
                fprintf("parzyste.txt", "%d\n", liczba);
            }
            else{
                fprintf("nieparzyste.txt", "%d\n", liczba);
            }
        }
        fclose(plik);
        fclose(parzyste);
        fclose(nieparzyste);
    }
    else{
        printf("Nie udalo sie znalezc pliku\n");
    }

    return 0;
}