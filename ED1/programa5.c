// Programa 5: desenvolver um programa que leia a quantidade de vitórias, derrotas e empates de um time ao final de um campeonato e que e imprima a quantidade total de jogos, a quantidade de pontos disputados, de pontos ganhos e pontos perdidos. Vitória: 3 pontos, empate: 1 ponto e derrota: 0 ponto.

#include <stdio.h>

int main(void){
    int vitorias, derrotas, empates, jogos, pontosTotal, pontosGanhos;

    printf("\nDigite o numero de vitorias: ");
    scanf("%d", &vitorias);

    printf("\nDigite o numero de derrotas: ");
    scanf("%d", &derrotas);

    printf("\nDigite o numero de empates: ");
    scanf("%d", &empates);

    jogos = vitorias + derrotas + empates;
    pontosTotal = jogos * 3;
    pontosGanhos = (vitorias * 3) + (empates * 1);

    printf("\n\nNumero de jogos: %d", jogos);
    printf("\nQuantidade de pontos disputados: %d", pontosTotal);
    printf("\nPontos ganhos: %d", pontosGanhos);
    printf("\nPontos perdidos: %d\n\n", (pontosTotal - pontosGanhos));
}