#include <stdio.h>

int main(){
   int matriz[3][3];

   for(int i = 0 ; i < 3 ; i++ ){
     for(int j = 0; j < 3 ; j++){
        printf("Insira o dado na posicao %d, %d \n", (i +1) , (j +1));
        scanf("%d", &matriz[i][j]);
     }
    }

   for (int i = 0; i < 3 ; i++){
      for(int j =0; j<3 ; j++){
       printf("Na posicao %d-%d foi inserido : %d \n",(i+1),(j+1), matriz[i][j]);

      }

   }

}
