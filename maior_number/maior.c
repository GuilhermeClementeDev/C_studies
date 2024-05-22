#include <stdio.h>

int main(){

  float a,b=0;

  printf("Infome o 1 número: \n");
  scanf("%f", &a);

  printf("Infome o 2 número: \n");
  scanf("%f", &b);

  if (a > b){
   printf("O primeiro número é maior que o segundo\n");
   printf("%0.2f > %0.2f \n", a , b);
  } else if (b > a){
   printf("O segundo número é maior que o primeiro\n");
   printf("%0.2f < %0.2f \n", a , b);

  }else {
   printf("Os números são iguais\n");
   printf("%0.2f = %0.2f \n", a , b);

  }
}

