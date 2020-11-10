// Programa 9: desenvolver um programa que leia um número inteiro e imprima todos os números primos entre 1 e o número lido.

#include <stdio.h>

int main(void){ 
    int i, j, n, primo;  
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    printf("Numeros primos entre 1 e %d: ", n);
    for (i = 1; i <= n; i++){
        primo = 0;
        for (j = 1; j <= i; j++){
            if ((i % j) == 0){
                primo += 1;
            }
        }
        if (primo <= 2) {
            i == n ? printf("%d. ", i) : printf("%d, ", i);
        }
    }   
}