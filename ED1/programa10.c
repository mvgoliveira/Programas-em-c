//Programa 10: desenvolver um programa que utilize uma função recursiva para determinar quantas vezes um dígito K ocorre em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.

#include <stdio.h>
#include <string.h>

int ocorrencias(char n[], char k, int i, int resultado, int tamanho){
    if (i == tamanho){
        return (resultado);
    } else {
        if (n[i] == k){
            resultado++;
        }
        i++;
        ocorrencias(n, k, i, resultado, tamanho);
    }
}

int main(void){
    char n[50], k[2];
    int resposta, tamanho;

    printf("Digite um numero: ");
    fgets(n, sizeof(n), stdin);
    
    if(!strchr(n, '\n'))
        while((getchar())!='\n');
    n[strcspn(n,"\n")] = 0;
    
    tamanho = strlen(n);

    printf("Digite um digito: ");
    fgets(k, sizeof(k), stdin);

    if(!strchr(k, '\n'))
        while((getchar()) != '\n');

    printf( "O digito %c ocorre %d vezes em %s.", k[0], ocorrencias(n, k[0], 0, 0, tamanho), n);
}