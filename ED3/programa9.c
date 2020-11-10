//Programa 9: desenvolver um programa que utilize a função concat(char *str1, char *str2) para concatenar duas strings. A função deve fazer a alocação dinâmica de memória para acomodar a nova string concatenada na memória. Lembre-se de verificar o tamanho do espaço de memória disponível e caso não haja espaço suficiente o programa deve retornar uma mensagem de erro para o usuário.

#include <stdio.h>
#include <string.h>

char *concat(char *str1, char *str2){
  char *str3 = (char *) malloc(1 + (strlen(str1) + strlen(str2)));
  int index = 0;
  
  if (str3 == NULL){
    return "STRIGS MUITO GRANDE. ESPAÇO EM MEMÓRIA INSUFICIENTE.";
  } 

  while (*str1 != '\0'){
    str3[index] = *str1;
    index++;
    str1++;
  }

  while (*str2 != '\0'){
    str3[index] = *str2;
    index++;
    str2++;
  }

  str3[index] = '\0';
  return str3;
}

int main(void) {
  char str1[] = "Teste", str2[] = " 123";
  
  printf("%s", concat(str1, str2));

}