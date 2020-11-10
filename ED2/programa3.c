//Programa 3: desenvolver um programa que leia os elementos de uma matriz quadrada de ordem 3 e faça a multiplicação dessa matriz por uma valor definido pelo usuário.

#include <stdio.h>

int main(void){
    float matriz[3][3], n;
    int coluna, linha;

    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            printf("Digite o valor da linha %d e coluna %d: ", linha+1, coluna+1);
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    printf("Digite um numero: ");
    scanf("%f", &n);

    printf("\n\n");

    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            printf("%.2f ", (matriz[linha][coluna] * n));
        }
        printf("\n");
    }
}