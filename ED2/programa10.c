//Desenvolva um programa que leia uma frase cifrada utilizando a criptografia de Cézar e quebre esta criptografia utilizando força bruta. Como resultado o programa deverá imprimir todas as frases utilizando todas as possíveis chaves.

#include <stdio.h>
#include <ctype.h>

int main(void){
    char *alfabeto[] = {'a', 'b', 'c', 'd', 'e','f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '}, frase[100]; 

    int i, j, k, l, tamanho = sizeof(alfabeto)/sizeof(alfabeto[0]);
   
    printf("Digite a frase encripitada: ");
    fgets(frase, sizeof(frase), stdin);
    
    if(!strchr(frase, '\n'))
        while((getchar())!='\n');

    //i = chave   j = letra da frase   k = letra do alfabeto
    for (i = 0; i < tamanho; i++){ //loop das chaves
        printf("\nChave [%d]: ", i);
        for (j = 0; j < strlen(frase); j++){ //loop das letras da frase
            for (k = 0; k < tamanho; k++){ //loop das letras do alfabeto
                if (k < tamanho - i){
                    if (tolower(frase[j]) == alfabeto[k]) {
                        printf("%c", alfabeto[k + i]);
                    }
                } else {
                    for (l = i; l > 0; l--){
                        if (alfabeto[tamanho - l] == tolower(frase[j])){
                            printf("%c", alfabeto[i - l]);
                        }
                    }
                    break;
                }
            }
        }
    }
}