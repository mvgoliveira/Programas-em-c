//Programa 4: desenvolver um programa que leia os elementos de uma matriz quadrada de ordem 3 e imprima se ela é uma matriz NULA, IDENTIDADE ou QUADRADA NORMAL.

#include <stdio.h>

int main(void){
    float matriz[3][3], n, soma;
    int coluna, linha;

    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
            printf("Digite o valor da linha %d e coluna %d: ", linha+1, coluna+1);
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    soma = matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[2][0] + matriz[2][1] + matriz[2][2];

    if (soma == 0){
        printf("MATRIZ NULA");
    } else if (matriz[0][0] + matriz[1][1] + matriz[2][2] == 3 && soma == 3){
        printf("MATRIZ IDENTIDADE");
    } else {
        printf("MATRIZ NORMAL");
    }
}