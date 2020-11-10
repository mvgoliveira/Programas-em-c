//Programa 6: desenvolver um programa que leia uma frase, incluindo espaços em branco, e depois imprima a mesma frase sem os espaços em branco.

#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[100];
    int i, j = 0;

    printf("\nDigite uma frase com espacos: ");
    fgets(palavra, sizeof(palavra)/sizeof(palavra[0]), stdin);

    if(!strchr(palavra, '\n'))
        while((getchar())!='\0');
    
    for (i = 0; i < strlen(palavra); i++){
        if (palavra[i] != ' '){
            printf("%c", palavra[i]);
        }        
    }
}