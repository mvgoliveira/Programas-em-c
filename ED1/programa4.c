// Programa 4: desenvolver um programa que leia os valores de A, B e C e que imprima “Não forma triângulo”, se um dos valores for maior que a soma dos outros 2, caso contrário, imprimir qual é o tipo do triângulo, que pode ser “Eqüilátero”, se tiver os 3 lados iguais, “Isósceles”, se tiver 2 lados iguais e “Escaleno”, se os 3 lados forem diferentes.

#include <stdio.h>

int main(void){

    float A, B, C, soma[3];

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("\nDigite o valor de B: ");
    scanf("%f", &B);

    printf("\nDigite o valor de C: ");
    scanf("%f", &C);

    soma[0] = A + B;
    soma[1] = B + C;
    soma[2] = C + A;

    if (A > soma[1] || B > soma[2] || C > soma[0]){
        printf("\nNao forma triangulo");
    } else {
        if (A == B || A == C){
            if (A == B && A == C){
                printf("\nTriangulo equilatero");
            } else {
                printf("\nTriangulo isoceles");
            }     
        } else {
            printf("\nTriangulo escaleno");
        }
    }    
}
