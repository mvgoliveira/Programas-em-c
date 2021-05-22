#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearBuffer(char nome[]) {
  if(!strchr(nome, '\n'))
    while((getchar())!='\n');
  nome[strcspn(nome,"\n")] = 0;

  nome[strcspn (nome, "\n")] = 0; // Para substituir o /n por /0 (Nada)
}

int main(){
   
}