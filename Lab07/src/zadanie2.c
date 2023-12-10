#include <stdio.h>

int main(){
    int tablica[10];

    for(int i = 0; i < 10; i++){
        printf("Wprowadź wartość tablicy na miejscu %d: ", i);
        scanf("%d", &tablica[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Element tablicy %d: %d\n",i, tablica[i]);
    }
    return 0;
}