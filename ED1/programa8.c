// Programa 8: desenvolver um programa que leia 2 números e um operador (“+”, “-”, “*”, “/”) e calcule e imprima o resultado correspondente ao operador lido. Caso seja lido outro operador, imprimir “Operação Inválida”.

#include <stdio.h>

int main(void) {
    int n1, n2;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o operador: ");     
    scanf(" %c", &operador);
    printf("Digite o segundo numero: ");   
    scanf("%d", &n2);     

    switch (operador){
        case '+':
            printf("%d %c %d = %d", n1, operador, n2, n1 + n2); 
            break;
        case '-':
            printf("%d %c %d = %d", n1, operador, n2, n1 - n2);
            break;
        case '*':
            printf("%d %c %d = %d", n1, operador, n2, n1 * n2);
            break;
        case '/':
            printf("%d %c %d = %d", n1, operador, n2, n1 / n2);
            break;
        default:
            printf("opcao invalida");
            break;
    }    
}