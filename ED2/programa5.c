//Programa 5: desenvolver um programa que solicite um número ímpar e imprima um diamante formado por uma sequência de asteriscos (*).

#include <stdio.h>

int main(void){
    int n, i, j, k;

    printf("Digite um numero impar: ");
    scanf("%d", &n);

    if (n % 2 != 0){

        for (i = 1; i <= n; i += 2){
            
            if (i < n){
                for (k = 0; k < n - i; k++){
                    printf(" ");
                }
            }
            
            for (j = 1; j <= i; j++){            
                printf("* ");
            }
            printf("\n");
        }

        for (i = (n-2); i >= 1; i-=2){
            
            if (i < n){
                for (k = 0; k < n - i; k++){
                    printf(" ");
                }
            }

            for (j = 1; j <= i; j++){
                printf("* ");
            }
            printf("\n");
        }

    } else {
        printf("%d nao eh impar", n);
    }
}