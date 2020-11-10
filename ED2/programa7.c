//Programa 7: desenvolver um programa que leia duas strings fornecidas pelo usuário e verifique se a segunda string lida está contida no final da primeira, imprimindo ESTÁ CONTIDO, caso positivo, ou NÃO ESTÁ CONTIDO, caso negativo.

#include <stdio.h>
#include <string.h>

int main(void){
    char str1[100], str2[100];
    int boolean = 0, i, comeco;

    printf("\nDigite a primeira frase: ");
    fgets(str1, sizeof(str1), stdin);

    if (!strchr(str1, '\n'))
        while((getchar())!='\n');
    
    printf("\nDigite a segunda frase: ");
    fgets(str2, sizeof(str2), stdin);

    if (!strchr(str2, '\n'))
        while((getchar())!='\n');

    comeco = strlen(str1) - strlen(str2);
    
    for (i = comeco; i < strlen(str1); i++){
        if (str2[i - comeco] != str1[i]){
            boolean++;
        }
    }

    if (boolean == 0){
        printf("ESTA CONTIDO");
    } else {
        printf("NAO ESTA CONTIDO");
    }
}