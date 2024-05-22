#include <stdio.h>

 struct cadastro{
    char nome[40];
    int idade;
    float peso;
 };

 typedef struct cadastro cadastro;

int main (){

 struct cadastro cad[3];

 for (int i =0 ; i < 3; i++){

 printf("Insira seu nome: ");
 scanf("%39[^\n]s", cad[i].nome);
 fflush(stdin);

 printf("Insira sua idade: ");
 scanf("%d", &cad[i].idade);
 fflush(stdin);

 printf("Insira seu peso: ");
 scanf("%f", &cad[i].peso);
 fflush(stdin);
 }
 for (int i =0; i< 3 ; i++){
    printf("Insira seu nome: %s\n",cad[i].nome );
    printf("Insira sua idade: %d", cad[i].idade);
    printf("Insira seu peso: %2f", cad[i].peso);
 }

}

