//Programa 1: desenvolver um programa que leia a quilometragem inicial e final de um veículo em uma viagem e a quantidade de combustível consumido, em seguida calcule e imprima a média de combustível por quilômetro rodado.

#include <stdio.h>

int main(void) {
    float inicial;
    float final;
    float combustivel;

    printf("Digite a quilometragem inicial: ");
    scanf("%f", &inicial);

    printf("\nDigite a quilometragem final: ");
    scanf("%f", &final);
    
    printf("\nDigite a quantidade de combustivel consumido (Em litros): ");
    scanf("%f", &combustivel);


    printf( "\nCombustivel por km: %f Litros\n\n", (combustivel / (final - inicial)) );
}
