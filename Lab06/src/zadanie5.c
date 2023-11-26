#include <stdio.h>

void liczbaBinarna(int n){
   if(n > 0){
        liczbaBinarna(n / 2);
        printf("%d", n%2);
   }
}

int main(){
    int n;
    printf("Podaj Liczbe: ");
    scanf("%d", &n);
    liczbaBinarna(n);

    return 0;
}