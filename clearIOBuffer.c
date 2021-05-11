#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearBuffer(char nome[]) {
  if(!strchr(nome, '\n'))
    while((getchar())!='\n');
  nome[strcspn(nome,"\n")] = 0;
}

int main(){
   
}