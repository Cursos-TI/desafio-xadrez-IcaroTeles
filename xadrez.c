#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    /*
    //========== DECLARAÇÃO DE VARIÁVEIS

   
    int bispo = 1, torre = 1, rainha = 1;
    */

    //========== Implementação de Movimentação do Bispo
    printf ("Movimentação do BISPO:\n");
    
    moverbispo (5);
    
    printf ("==========\n");

    /*

    for (bispo; bispo <= 5; bispo++) {
        printf ("DIREITA/CIMA!\n");
    }

    */

    // ========== Implementação de Movimentação da Torre

     printf ("Movimentação da TORRE:\n");
    
     movertorre(5);

     printf ("==========\n");

    /*

    while (torre <= 5) {
        printf ("DIREITA!\n");
        torre++;
    }
    
    */

    //==========  Implementação de Movimentação da Rainha
     
    printf ("Movimentação da RAINHA:\n");

    moverrainha(8);

    printf ("==========\n");

    /* 
    do {
        printf ("ESQUERDA!\n");
        rainha++;
    } while (rainha <= 8);
    
    */

    //========== Implementação de Movimentação do Cavalo

    printf ("Movimentação do CAVALO:\n");

    int cima;

    while (cima == 0){
     for (cima = 3; cima > 0; cima -= cima > 2 ? 1 : 2) {

        printf ("CIMA!\n");
    }
        printf ("DIREITA!\n");
        break; 
    }

     /*

    int a, b = 0;

    for (a = 1; a > 0; a--){
        while (b < 2){
            printf ("BAIXO!\n");
            b++;
        }

        printf ("ESQUERDA!\n");
    }
        
    */

    return 0;
}

//========== DECLARAÇÃO DE RECURSIVAS

void moverbispo (int casas){
    if (casas > 0) {
        printf ("CIMA/DIREIRA!\n");
        moverbispo (casas - 1);
    }
}

void moverrainha (int casas){
    if (casas > 0) {
        printf ("ESQUERDA!\n");
        moverrainha (casas - 1);
    }
}

void movertorre (int casas){
    if (casas > 0) {
        printf ("DIREITA!\n");
        moverbispo (casas - 1);
    }
}
