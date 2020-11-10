//Programa 8: desenvolver um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string. A string e as letras L1 e L2 serão fornecidas pelo usuário.

#include <stdio.h>
#include <string.h>

int main(void){
    char l1[2], l2[2], str[100];
    int i;
    
    printf("\nDigite uma frase: ");
    fgets(str, sizeof(str), stdin);

    if (!strchr(str, '\n'))
        while((getchar())!='\n');
    
    
    printf("\nDigite a letra a ser trocada: ");
    fgets(l1, sizeof(l1), stdin);

    if (!strchr(l1, '\n'))
        while((getchar())!='\n');
    
    
    printf("\nDigite a letra para trocar: ");
    fgets(l2, sizeof(l2), stdin);

    if (!strchr(l2, '\n'))
        while((getchar())!='\n');
    
    for (i = 0; i < strlen(str); i++){
        if (str[i] == l1[0]) {
            str[i] = l2[0];
        }
    }   

    printf("%s", str);   
}