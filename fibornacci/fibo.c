#include <stdio.h>

int main (){

 int atual, a1 , a2 , a3;
 a2 = 0;
 a1 = 1;

   printf("Sequencia de fibornacci: \n");
   printf("%d ", a2);
   printf("%d ", a1);

   for (int i = 3; i <= 8; i++){
   atual = a2 + a1 ;
   a2 = a1 ;
   a1 = atual;
   printf("%d ", atual);
   }
    printf("\n");

}
