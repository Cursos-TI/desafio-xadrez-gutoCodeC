#include <stdio.h>

// Constantes para os movimentos de cada peça
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // ============================
    // MOVIMENTO DO BISPO (FOR)
    // Diagonal Superior Direita = combinação de "Cima" e "Direita"
    // ============================
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // ============================
    // MOVIMENTO DA TORRE (WHILE)
    // Direita 5 vezes
    // ============================
    printf("Movimentação da Torre:\n");
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }
    printf("\n");

    // ============================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // Esquerda 8 vezes
    // ============================
    printf("Movimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);
    
    return 0;
}
