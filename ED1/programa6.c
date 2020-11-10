// Programa 6: desenvolver um programa que leia uma temperatura em Fahrenheit e imprima essa temperatura convertida em Celsius. C = 5 / 9 * (F - 32).

#include <stdio.h>

int main(void) {
    float F;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    
    printf("Temperatura em graus Celsius: %f", ((F - 32) * (5. / 9.)));
}