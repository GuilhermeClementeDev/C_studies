#include <stdio.h>

int calculo();

int main(){

calculo();

}

int calculo(){
   int segundos = 0;
   int hora, minutos, seg = 0;
   printf("Informe o tempo em segundos: \n");
   scanf("%d", &segundos);

   hora = segundos/3600;
   segundos = segundos % 3600;

   minutos = segundos/60;
   segundos = segundos % 60;

   printf("Horas: %d\n", hora);
   printf("Minutos: %d\n", minutos);
   printf("Segundos: %d\n", segundos);

  return 0;
}
