#include <stdio.h>

void zamienWartosci(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int zmienna1 = 10;
    int zmienna2 = 20;
    printf("PRZED\nzmienna1: %d\nzmienna2: %d\n", zmienna1,zmienna2);
    zamienWartosci(&zmienna1,&zmienna2);
    printf("PO\nzmienna1: %d\nzmienna2: %d\n", zmienna1,zmienna2);
    return 0;
}