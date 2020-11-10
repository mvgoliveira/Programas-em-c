//Programa 5: Escreva uma função que recebe uma string de caracteres e uma letra, e em seguida devolve um vetor de inteiros contendo as posições (índices na string onde a letra foi encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas). Utilize um ponteiro para retornar os índices no vetor de inteiros e um ponteiro para guardar o tamanho do vetor.

#include <stdio.h>
#include <strings.h>

void contar(char *string, char *letra, int tamanho, int *pos, int *quant){
  int i, j = 0;

  for (i = 0; i < tamanho; i++){
    if (string[i] == *letra){
      pos[*quant] = i;
      *quant += 1;
    }
  }
}

int main(void){
  char *string = "abbcccdddd", letra[3]="b";
  int quant = 0, i;


  int tamanho = strlen(string);
  int pos[tamanho];

  contar(string, letra, tamanho, pos, &quant);

  printf("quantidade de letras encontradas: %d\nindex das letras no vetor: ", quant);
  for (i = 0; i < quant; i++){
    printf("%d ", pos[i]);
  }
}