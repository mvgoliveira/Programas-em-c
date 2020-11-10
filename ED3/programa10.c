//programa 10: desenvolver um programa que implemente uma estrutura de dados do tipo fila, utilizando ponteiros e alocação dinâmica de memória.

#include <stdio.h>

int empilhar(float index, float *fila, float numero){
  
  for (int i = 0; i < index; i++){
    if (fila[i] == '\n' || fila[i] == '\0'){
      fila[i] = numero;
      return 0;
    }
  }

  printf("\nCOMANDO INVALIDO. PILHA CHEIA\n");
}

void desempilhar(float index, float *fila){
  for (int i = 0; i < index; i++){
    fila[i] = fila[i+1];
  }
}

int main(void){
  int index, comando, num=1;

  printf("Digite a quantidade de elementos na fila: ");
  scanf("%d", &index);

  if(index > 10){
    printf("\nEXCESSO DE ELEMENTOS. VALOR MAXIMO = 10\n");
    return 0;
  }

  float *fila = (float *) malloc(index + sizeof(float));

  while (num != 0){
    printf("\n\n--------------------------------------\n");
    printf("Digite sua opção\n");
    printf("[0] Encerrar programa\n");
    printf("[1] Adicionar elemento na pilha\n");
    printf("[2] Remover elemento da pilha\n> ");

    scanf("%d", &comando);

    if (comando == 1){
      printf("\nDigite o numero: ");
      scanf("%d", &num);

      empilhar(index, fila, num);
    } else if (comando == 2){
      desempilhar(index, fila);
    } else if (comando == 0){
      return 0;
    } else {
      printf("Comando Invalido");
    }

    printf("\nFila: ");
    for (int i = 0; i < index; i++){
      printf("%f ", fila[i]);
    }
  }
}