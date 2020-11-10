//Programa 3: Escreva um programa que declare uma matriz 10x10 de inteiros. Você deverá criar uma função para inicializar a matriz com zeros usando um ponteiro para a matriz. Faça outra função para preencher depois a matriz com os números de 99 a 0, também usando ponteiro para matriz como parâmetro. Por fim, o programa deve imprimir a matriz.

#include <stdio.h>

void inicializar(int *matriz) {
    int i, j, k;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
        *((matriz+i*10) + j) = 0;
        }
    }
}

void preencher(int *matriz) {
    int i, j, k;
    for (i = 0, k = 99; i < 10; i++){
        for (j = 0; j < 10; j++, k--){
        *((matriz+i*10) + j) = k;
        }
    }
}

int main(void){
    int matriz[10][10], i, j, k;

    inicializar(*matriz);
    preencher(*matriz);

    for (i = 0; i < 10; i++){
        printf("\n");
        for (j = 0; j < 10; j++){
        printf("%d ", matriz[i][j]);
        }
    }    
}