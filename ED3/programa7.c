//Programa 7: desenvolver um programa que leia a quantidade de vogais e consoantes em uma frase utilizando ponteiros.

#include <stdio.h>

void contar(char *frase, int *vogais, int *consoantes){
  char *str = frase;

  while(*str){
    char letra = tolower(*str);        
    if(letra >= 'a' && letra <= 'z'){
      if(letra == 'a' || letra == 'e' || letra =='i' || letra == 'o' || letra == 'u'){
        *vogais += 1;
      } else {
        *consoantes += 1;
      }
    }
    *str++;
  }
}

int main(){
  char frase[] = "Teste";
  int consoantes = 0, vogais = 0;

  contar(frase, &vogais, &consoantes);

  printf("Numero de consoantes: %d\nNumero de vogais: %d\n", consoantes, vogais);
}