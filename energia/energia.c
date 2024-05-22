#include <stdio.h>

float calculoKw(float salario_min);
float custo_sem_d(float custoKw, float kw_gasto);
float custo_cm_d(float custo_total);

int main (){
 float salario_min, kw_gasto, resultado_calc_kw, result_custo_sem_d, result_cm_d;

 printf("Informe salario minimo: \n");
 scanf("%f", &salario_min);

 printf("Informe a quantidade de KW ultizado: \n");
 scanf("%f", &kw_gasto);

 resultado_calc_kw = calculoKw(salario_min);
 result_custo_sem_d = custo_sem_d(resultado_calc_kw, kw_gasto);
 result_cm_d = custo_cm_d(result_custo_sem_d);

 printf("Valor de 1 Kw (em reais): R$ %0.2f \n", resultado_calc_kw );
 printf("Valor a ser pago (em reais): R$ %0.2f \n", result_custo_sem_d );
 printf("Valor com desconto de 15 porcento(em reais): R$ %0.2f \n", result_cm_d );
}


// valor em reais kw

float calculoKw(float salario_min){
    float result = 0;
    float calc = 0.001;

    result = salario_min * calc;
    return result;
}

// valor em reais a ser pago por residencia

float custo_sem_d(float custoKw, float kw_gasto ){
    int result1 = 0;
    result1 = custoKw * kw_gasto;
    return result1;
}

// valor em reais com desconto de 15%

float custo_cm_d(float custo_total ){
    int result2 = 0;
    result2 = custo_total * 0.15 ;
    result2 = custo_total - result2;
    return result2;
}
