#include <stdio.h>

int main (){

  float media,lab, as, ef;

  // recebendo os dados
  printf("Informe a nota do trabalho de laboratorio: \n");
  scanf("%f",  &lab);

  printf("Informe a nota da Avaliação semestral: \n");
  scanf("%f",  &as);

  printf("Informe a nota do exame final: \n");
  scanf("%f",  &ef);


  // mudando o peso dos dados recebidos

  lab = lab*2;
  as = as * 3;
  ef = ef *5;

  // calculo media

  media = (lab + as + ef)/10;
  printf ("%0.2f\n",  media );
  // conceitos

  if (media <= 10 && media >= 8){
    printf("Conceito A\n");
  } else if (media < 8 && media >= 7){
    printf("Conceito B\n");
  } else if (media < 7 && media >=6){
   printf("Conceito C\n");
  }else if (media < 6 && media >= 5){
   printf("Conceito D\n");
  }else{
   printf("Conceito E\n");
  }

}
