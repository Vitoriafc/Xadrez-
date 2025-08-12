#include <stdio.h>
#include <stdbool.h>

// Nível Mestre: Funções recursivas para a movimentação das peças
void moverRainha(int casas, int movimentoAtual) {
    if (movimentoAtual <= casas) {
        printf("Rainha: Esquerda\n");
        moverRainha(casas, movimentoAtual + 1);
    }
}

void moverTorre(int casas, int movimentoAtual) {
    if (movimentoAtual <= casas) {
        printf("Torre: Direita\n");
        moverTorre(casas, movimentoAtual + 1);
    }
}

void moverBispoRecursivo(int casas, int movimentoAtual) {
    if (movimentoAtual <= casas) {
        for(int i = 0; i < 1; i++) {
            for(int j = 0; j < 1; j++) {
                printf("Bispo: Cima Direita\n");
            }
        }
        moverBispoRecursivo(casas, movimentoAtual + 1);
    }
}

int main() {
    
    // Nível Novato - Movimentação das Peças

    /*
    const int casas_bispo = 5;
    const int casas_torre = 5;
    const int casas_rainha = 8;

    printf("--- Nivel Novato: Movimentacao das Pecas Simples ---\n\n");

    printf("Movimentacao do Bispo:\n");
    for (int i = 0; i < casas_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimentacao da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimentacao da Rainha:\n");
    for (int i = 0; i < casas_rainha; i++) {
        printf("Esquerda\n");
    }
    printf("\n");
    */

    // --------------------------------------------------------------------------------

    // Nível Aventureiro - Movimentação do Cavalo
   
    /*
    printf("--- Nivel Aventureiro: Movimentacao do Cavalo em L ---\n\n");

    const int movimento_horizontal = 1;
    const int movimento_vertical = 2;

    for (int i = 0; i < movimento_horizontal; i++) {
        printf("Esquerda\n");
        int j = 0;
        while (j < movimento_vertical) {
            printf("Baixo\n");
            j++;
        }
    }
    printf("\n");
    */

    // --------------------------------------------------------------------------------
    
    // Nível Mestre - Funções Recursivas e Loops Avancados

    /*
    printf("--- Nivel Mestre: Funcoes Recursivas e Loops Avancados ---\n\n");

    moverBispoRecursivo(5, 1);
    printf("\n");

    moverTorre(5, 1);
    printf("\n");

    moverRainha(8, 1);
    printf("\n");

    printf("Movimentacao do Cavalo:\n");
    for (int i = 0, j = 0; i < 20; i++, j++) {
        if (i == 2 && j == 2) {
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            break;
        }
    }
    printf("\n");
    */

    return 0;
}