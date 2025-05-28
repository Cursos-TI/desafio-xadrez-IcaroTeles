#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //========== DECLARAÇÃO DE VARIÁVEIS

    int bispo = 1, torre = 1, rainha = 1;

    //========== Implementação de Movimentação do Bispo
    
    for (bispo; bispo <= 5; bispo++) {
        printf (" Bispo Andou para a DIREITA/CIMA!\n");
    }

    printf ("==========\n");

    // ========== Implementação de Movimentação da Torre

    
    while (torre <= 5) {
        printf (" Torre andou Direita!\n");
        torre++;
    }
    
    printf ("==========\n");

    //==========  Implementação de Movimentação da Rainha
    
    do {
        printf ("Rainha andou para a ESQUERDA!\n");
        rainha++;
    } while (rainha <= 8);
    
    printf ("==========\n");
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
