#include <stdio.h> // biblioteca padrão de entrada e saída
#include <stdlib.h> // biblioteca padrão de funções utilitárias
#include <string.h> // biblioteca padrão de manipulação de strings

int main() { // Função principal
    printf("Movimento da Torre:\n"); // comentário sobre o movimento da torre
    for (int i = 0; i < 5; i++) { // Loop para mover a torre 5 casas
        printf("Direita\n"); // A torre move uma casa para direita
    }

    // Mov do bispo // 
    printf("\nMovimento do Bispo:\n"); // comentário sobre o movimento do bispo
    int j = 0; // Inicializa o contador
    while (j < 5) { // Loop para mover o bispo 5 casas
        printf("Cima Direita\n"); // O bispo move uma casa para cima e para a direita
        j++; // Incrementa o contador
    } // Fim do loop

    // Mov da Rainha
    printf("\nMovimento da Rainha:\n"); // comentário sobre o movimento da rainha
    // A Rainha move-se 8 casas para a esquerda
    int k = 0; // Inicializa o contador
    do { // Loop para mover a rainha 8 casas
        printf("Esquerda\n"); // A rainha move uma casa para a esquerda
        k++; // Incrementa o contador
    } while (k < 8); // Continua até mover 8 casas

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
