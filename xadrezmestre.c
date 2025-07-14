#include <stdio.h>


void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}


int main() {
    int i, j;

 
    printf("Movimento do Bispo:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    printf("\n");

    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

  
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

   
    printf("Movimento do Cavalo:\n");
    int cima = 0, direita = 0;

    for (int passo = 0; passo < 3; passo++) {
        if (passo < 2) {
            cima++;
            printf("Cima\n");
        } else if (passo == 2) {
            direita++;
            printf("Direita\n");
        }

        if (cima > 2 || direita > 1) {
            printf("Movimento inválido!\n");
            break;
        }

        if (passo == 1) {
            continue; 
        }
    }

    return 0;
}
