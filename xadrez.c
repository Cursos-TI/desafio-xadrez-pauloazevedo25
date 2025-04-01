#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
    int i; //variável de controle
    int t = 5;   //Número de casas - Torre
    int b = 5;   //Número de casas - Bispo
    int r = 8;   //Número de casas - Rainha



    //Movimento Torre
    for (i=0; i<t; i++ )
        printf("Direita\n");

    //Movimento Bispo    
    for (i=0; i<b; i++)
        printf("Cima, Direita\n");
    
    //Movimento Rainha  
    for (i=0; i<r; i++)
        printf("Esquerda\n");

    //Movimento Cavalo
    i = 0;
   
    printf("\n"); // Separando o movimento do cavalo com uma linha em branco

    while (i==0){
        for (i=0; i<2; i++)
            printf("Baixo\n");
        printf("Esquerda\n");
    }
    
    
    return 0;
}
