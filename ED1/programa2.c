//Programa 2: desenvolver um programa que leia o ano de nascimento de uma pessoa e que calcule a sua idade aproximada. Se a idade aproximada for maior ou igual a 16 o programa deverá imprimir “Apto a ser eleitor”,  caso contrário e deverá imprimir “Inapto a ser eleitor”.

#include <stdio.h>

int main(void) {
    int anoNascimento;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    if((2020 - anoNascimento) < 16){
        printf("\n Inapto a ser eleitor\n\n");
    } else {
        printf("\n Apto a ser eleitor\n\n");
    };
}
