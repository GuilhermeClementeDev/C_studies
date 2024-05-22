#include <stdio.h>

int main (){
   int soma = 0;
    for(int i = 0 ; i <= 10; i++ ){
    soma = soma + i;
    printf("%d\n", soma);
    }
    printf("Número final: %d\n", soma);
}
