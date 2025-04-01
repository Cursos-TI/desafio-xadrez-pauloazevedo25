#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
    int i;
    //Movimento Torre
    for (i=0; i<5; i++ )
        printf("Direita\n");

    //Movimento Bispo    
    for (i=0; i<5; i++)
        printf("Cima, Direita\n");
    
    //Movimento Rainha  
    for (i=0; i<8; i++)
        printf("Esquerda\n");
    
    return 0;
}
