#include <stdio.h>

int main (){

    int opcao = 0 ;
    int a = 0;
    int b = 0;
    int result = 0;

    do {
        printf("O número informado para a = %d\n", a);
        printf("O número informado para b = %d\n", b);
        printf("Calculadora de inteiros: \n");
        printf("1-Informar novos valores :\n");
        printf("2-Soma :\n");
        printf("3-Subtração :\n");
        printf("4-Divisão :\n");
        printf("5-Multiplicação :\n");
        printf("6-Sair\n");
        printf("Resultado é : %d \n", result);
        scanf("%d\n", &opcao);

        switch(opcao){
            case 1:
            printf("Informe o valor de a\n");
            scanf("%d", &a);

            printf("Informe o valor de b\n");
            scanf("%d", &b);

            if (a >= 0 && b >= 0){
                printf("Valor armazenado com sucesso. \n ");
            }else {
                printf("Valor invalido. \n");
            }
            break;

            case 2:
            result = a + b;
            break;

            case 3:
            result = a - b;
            break;

            case 4:
            result = a / b;
            break;


            case 5:
            result = a * b;
            break;


            case 6:
            result = a + b;
            printf("Finalizando o programa... \n");
            break;


            default:
            printf("Opção inválida: \n");
            break;
        }

    } while(opcao != 6);
}
