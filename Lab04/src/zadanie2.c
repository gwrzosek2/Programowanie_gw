#include <stdio.h>

int potegowanie(int a, int b){
    int temp = a;
    for(int i = 1; i < b; i++){
        temp = temp * a;
    }

    return temp;
}

int main() {
  int a,b;

  printf("Podaj liczbe potegowana: ");
  scanf("%d", &a);
  printf("Podaj do jakiej potegi podniesc %d: ", a);
  scanf("%d", &b);

  printf("%d do potegi %d wynosi: %d\n", a, b, potegowanie(a,b));
  return 0;
}
