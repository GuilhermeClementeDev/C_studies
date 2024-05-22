#include <stdio.h>

float calculo_aumento (float salario , float aumento, float nvsalario );

int main(){

   // exercicio aumento salario

   float salario, nvsalario, aumento, aumentodecria;


   printf("Informe o salario atual: ");
   scanf("%f", &salario);

   printf("Informe o aumento atual: ");
   scanf("%f", &aumento);

   nvsalario = calculo_aumento (salario,aumento, 0 );
   aumentodecria = nvsalario - salario;

   printf("O antigo salario: %0.2f \n", salario);
   printf("O aumento foi de : %0.2f\n", aumentodecria);
   printf("Novo salario e: %0.2f\n", nvsalario);
}

float calculo_aumento (float salario ,float aumento,float nvsalario){
    float porcentagem = 0;
    aumento /= 100;
    porcentagem = salario * aumento;
    nvsalario = salario + porcentagem;
    return nvsalario;
}
