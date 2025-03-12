#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo, com loops aninhados
void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < 1; i++) {
        printf("Cima Direita\n");
    }
    moverBispo(casas - 1);
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo (2 casas para cima e 1 para a direita) - usando loops aninhados
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) { // Move duas casas para cima
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) { // Move uma casa para a direita
        printf("Direita\n");
    }
    
    return 0;
}
