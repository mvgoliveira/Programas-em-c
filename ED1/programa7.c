// Programa 7: desenvolver um programa que leia um ano e imprima o nome do país campeão da Copa do Mundo nesse ano, caso no ano lido não tenha acontecido Copa do Mundo, imprimir “Não aconteceu Copa do Mundo nesse ano”. (https://pt.wikipedia.org/wiki/Copa_do_Mundo_FIFA)

#include <stdio.h>
#include <string.h>

int main(void) {

    int anos[21] = {1930, 1934,  1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018};

    char *campeoes[]= {"uruguai", "Italia", "Italia", "Uruguai", "Alemanha Ocidental", "Brasil", "Brasil", "Inglaterra", "Brasil", "Alemanha Ocidental",  "Argentina", "Italia", "Argentina", "Alemanha Ocidental", "Brasil", "Franca", "Brasil", "Italia", "Espanha", "Alemanha", "Franca"};
    
    int ano, i, win;
    char campeao;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);

    for (i = 0; i < sizeof(anos)/sizeof(anos[0]); i++){
        if (ano == anos[i]){
            win = 1;
            printf("%s \n", campeoes[i]);
        }
    }

    if (win != 1){
        printf("Nao aconteceu Copa do Mundo nesse ano\n");
    }
}