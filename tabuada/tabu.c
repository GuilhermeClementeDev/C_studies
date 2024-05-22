#include <stdio.h>

int main (){
    int tabu = 0;

    for (int i = 1 ; i < 10 ; i++){
        for (int j = 1 ; j <= 10 ; j++){
            tabu = i * j ;
            printf("%d * %d = %d\n", i , j , tabu);
        }
     printf("\n");
    }
}
