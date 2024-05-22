#include <stdio.h>

float calculo(int hr, float sala_min);

int main (){
  int hr;
  float salario,result;

  printf("Informe a quantidade de horas trabalhada: \n");
  scanf("%d", &hr);

  printf("Informe o valor do salario minimo: \n");
  scanf("%f", &salario);

  result = calculo( hr , salario);

    printf("Valor de horas inforamada: %d \n", hr);
    printf("Valor salario minimo informado %0.2f: \n", salario);
    printf("Valor do salario final: %0.2f \n", result);
}



float calculo(int hr, float sala_min){
  float result_bruto1, result_bruto, result_real, vlr;
  float porc = 0.03 ;

  vlr = sala_min/2 ;

  result_bruto1 = (vlr * hr);
  result_real = result_bruto1 * porc;
  result_bruto = result_bruto1 - result_real;

  return result_bruto;

}
