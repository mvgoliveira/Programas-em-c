//Programa 1: desenvolver um programa em C que leia o nome e a nota de 5 alunos e armazene em arrays e imprima o nome de todos os alunos aprovados, com média igual ou superior a 6.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    int i, tamanho = 10;
    char *nomes[5][11];

    for (i = 0; i < 10; i += 2){

        printf("\nDigite o nome do aluno: ");
        fgets(nomes[i], (sizeof(nomes) / sizeof(nomes[0])), stdin);

        if(!strchr(nomes[i], '\n'))
            while((getchar())!='\n');
        nomes[strcspn(nomes[i],"\n")][i] = 0;

        printf("Digite a nota do aluno: ");
        fgets(nomes[i+1], 3, stdin);

        if(!strchr(nomes[i+1], '\n'))
            while((getchar())!='\n');
        nomes[strcspn(nomes[i+1],"\n")][i+1] = 0;

    }

    for (i = 0; i < 10; i += 2){
        if (atoi(nomes[i+1]) >= 6){
            printf("%s", nomes[i]);
        }
    }
}