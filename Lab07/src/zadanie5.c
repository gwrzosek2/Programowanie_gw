#include <stdio.h>

void posortujTrzy(int* a, int* b, int* c){
    if(*a < *b && *a < *c){
        if(*b < *c){
            printf("%d, %d, %d\n", *a,*b,*c);
        }
        else{
            printf("%d, %d, %d\n", *a,*c,*b);
        }
    }
    else if(*b < *a && *b < *c){
        if(*a < *c){
            printf("%d, %d, %d\n", *b,*a,*c);
        }
        else{
            printf("%d, %d, %d\n", *b,*c,*a);
        }
    }
    else{
        if(*a < *b){
            printf("%d, %d, %d\n", *c,*a,*b);
        }
        else{
            printf("%d, %d, %d\n", *c,*b,*a);
        }
    }
}

int main(){
    int a = 3;
    int b = 5;
    int c = 6;
    posortujTrzy(&a,&b,&c);
    return 0;
}
