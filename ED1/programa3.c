//Programa 3: desenvolver um programa que leia 10 números e imprima o maior número lido.

#include <stdio.h>

int main(void) {
    int i, maior, n = 10, numeros[n]; 
    for (i = 0; i < n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    maior = numeros[0];
    for (i = 0; i < n; i++){
        if (maior < numeros[i]){
            maior = numeros[i];
        }
    }
    printf("Maior valor: %d", maior);
}
