#include <stdio.h>

int zmiennaGlobalna = 1;

void wypiszAdresy(int a,int b){
    printf("Adres 1: %p\nAdres 2: %p\n",&a,&b);
}

int main(){
    int zmiennaLokalna = zmiennaGlobalna;
    printf("Globalna: %p\nLokalna: %p\n",&zmiennaGlobalna,&zmiennaLokalna);
    wypiszAdresy(zmiennaGlobalna,zmiennaLokalna);
    return 0;
}