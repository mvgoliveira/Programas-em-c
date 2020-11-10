//Programa 9: o programa a seguir lê um número natural informado pelo usuário e imprime todos os números pares entre 1 e o número informado. Porém este programa contém uma das falhas de segurança apresentadas durante as aulas. Identifique a falha de segurança do programa abaixo e reescreva o código implementando uma solução para mitigar o problema.

#include <stdio.h>

void imprime_lista_pares (int lista[], int tamanho_lista);

int main (void) {
 
  int pares[100], par, max;
  int indice = 0, i;

  printf("Este programa irá listar todos os números pares entre 1 e o número informado\n\n");

  printf("Digite um número: ");
  scanf("%i", &max);

    if (max > 200) // parte do código que foi alterado. Vulnerabilidade: Overflow do inteiro "pares[100]"
        return 0;

  for (i = 1; i <= max; i++) {
	if(i%2 == 0){
  	pares[indice]=i;
  	indice++;
	}
  }

  printf("Os números pares até %d sao: \n", max);
  imprime_lista_pares(pares, indice);
  return 0;

}

void imprime_lista_pares (int lista[], int tamanho_lista){
    int i;

    for (i = 0; i < tamanho_lista; i++ ) {
        printf("%d ", lista[i]);
    }
    
    printf("\n\n");
}
