#include <stdio.h>

int main (void){

// soma de 4 dígitos informados pelo usuario

float n[4];
float s = 0;

 for (int i =0 ; i < 4 ; i++ ){
 printf("Informe o número \n");
 scanf("%f", &n[i]);
 s += n[i];
 }
 printf("O total da soma é: %0.2f \n", s);

}
