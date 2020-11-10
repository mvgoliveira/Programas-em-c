//Programa 4: Escreva uma função que receba um vetor V com 10 inteiros armazenados. A função deve retornar o vetor V com o valor de cada posição multiplicado por 2.

#include <stdio.h>

int dobrar(int V[10]) {
  for (int i = 0; i < 10; i++){
    V[i] = V[i]*2;
  }
  return *V;
}

int main(void){
  int V[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  *V = dobrar(V);

  for (int i = 0; i < 10; i++){
    printf("%d ", V[i]);
  }
}