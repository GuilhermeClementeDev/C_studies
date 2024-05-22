#include <stdio.h>

float lucro (float porc,float vdf);
float imp (float porc_imp ,float vdf);
float price (float vdf,float imp1,float lucro1);


int main (){

   float c_d_f, p_l, p_i ;
   float receba_lucro, receba_imp, receba_price;

   printf("Informe o custo de fábrica: \n");
   scanf("%f", &c_d_f);

   printf("Informe a porcentagem de lucro: \n");
   scanf("%f", &p_l);

   printf("Informe a porcentagem de imposto: \n");
   scanf("%f", &p_i);

  receba_lucro = lucro ( p_l , c_d_f);
  receba_imp = imp (p_i, c_d_f);
  receba_price = price (c_d_f , receba_imp, receba_lucro);

  printf("Procentagem de lucro em R$ = %0.2f\n", receba_lucro );
  printf("Procentagem de imposto em R$ = %0.2f\n", receba_imp );
  printf("Preço final em R$ = %0.2f\n", receba_price );
}

// lucro distribuidor

 float lucro (float porc ,float vdf ){

  float lucro = 0;
  porc = porc/100;
  lucro = vdf * porc;

  return lucro ;
 }


//valor impostos

float imp (float porc_imp ,float vdf ){

  float imposto = 0;
  porc_imp = porc_imp/100;
  imposto = vdf * porc_imp;

  return imposto ;
 }

//final price


float price (float vdf,float imp1,float lucro1 ){

  float final_c = 0;
  final_c = vdf + imp1 + lucro1;

  return final_c ;
 }
