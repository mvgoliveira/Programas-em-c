// Programa 2: Faça um programa que crie um vetor de inteiros com a quantidade de elementos estipulada pelo usuário. Em seguida encontre o maior e o menor inteiro, calcule e imprime a soma. 

#include <stdio.h>

int main(void){
  int quantidade, *maior, *menor, i;

  printf("Digite a quantidade de números: ");
  scanf("%d", &quantidade);

  int vet[quantidade];

  printf("Digite os números: ");
  for (i = 0; i < quantidade; i++){
    scanf("%d", &vet[i]);
  }
  
  maior = vet;
  menor = vet;
  
  for (i = 0; i < quantidade; i++){
    if (*maior < vet[i]){
      maior = &vet[i];    
    }
    
    if (*menor > vet[i])
      menor = &vet[i];
  }

  printf("Maior: %d\n", *maior);
  printf("Menor: %d", *menor);
}