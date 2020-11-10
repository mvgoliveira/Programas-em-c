//Programa 6: desenvolver um programa que calcule, utilizando ponteiro, o comprimento de uma string passada como parâmetro do programa. Lembre de usar os parâmetros argc e *argv na função main para receber a frase no momento da execução do programa.

#include <stdio.h>

int tamanho(char *str){
	char *inicial = str;
	while (*str!='\0')
		str++;
	return (str - inicial);
}

int main(int argc, char *argv[ ]){
	printf("Tamanho da String: %d\n", tamanho(argv[1]));
}