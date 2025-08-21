#include <stdio.h>

int main() {

    // ------------------------------
    // Torre -> 5 casas para a direita (usando for)
    // ------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ------------------------------
    // Bispo -> 5 casas na diagonal (usando while)
    // ------------------------------
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // ------------------------------
    // Rainha -> 8 casas para a esquerda (usando do-while)
    // ------------------------------
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= 8);

    return 0;
}