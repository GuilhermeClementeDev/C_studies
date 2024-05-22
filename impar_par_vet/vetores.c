#include <stdio.h>

int main(){

   int vetor[9];

   for (int i = 0 ; i < 9 ; i++ ){
    printf("Insira o valor da posição %d: \n", i);
    scanf("%d", &vetor[i]);
   }
   for(int j = 0 ; j < 9; j++){
     if (vetor[j]%2 == 0){
        printf("%d é par, posicao %d\n", vetor[j], j);
     } else{
        printf("%d é primo, posicao %d\n", vetor[j], j);

     }
    }
}
