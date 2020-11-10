//Programa 8: Desenvolver um programa que faça a comparação de duas strings, utilizando ponteiros, e informe ao usuário se a segunda string está CONTIDA ou NÃO CONTIDA na primeira.

#include <stdio.h>
#include <string.h>

void comparar(char *str1, char *str2){
  int controle, i;
  
  while (*str1 && controle != strlen(str2)){
    controle = 0;

    for (i = 0; i < strlen(str2); i++){
      if (tolower(*(str1+i)) == tolower(str2[i])){
        controle++;
      }
    }
    str1++;
  }

  if(controle == strlen(str2)) {
    printf("Esta contida");
  } else {
    printf("Nao esta contida");
  }
}

int main(void){
  char str1[] = "TEste", str2[] = "tes";

  comparar(str1, str2);
}