#include <stdio.h>

int wypiszPrzedzial(int n, int i){
    if(i <= n){
        printf("%d\n", i);
    }
    else{
        return 0;
    }
        
   return wypiszPrzedzial(n,i += 1);
}

int main(){
    int n;
    printf("Podaj dlugosc przedzialu od 1 do n: ");
    scanf("%d", &n);
    printf("%d", wypiszPrzedzial(n,1));
    
    return 0;
}