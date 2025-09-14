#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;
   
    
    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona alguns navios (3)
    tabuleiro[4][2] = 3;
    tabuleiro[4][3] = 3;
    tabuleiro[4][4] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][7] = 3;

    printf(" TABULEIRO BATALHA NAVAL \n");
    // Imprime o cabeçalho das colunas com letras A-J
    printf("   ");// espaço para alinhar o cabeçalho com as linhas abaixo.
    for (j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // Imprime o tabuleiro, numerando as linhas de 1 a 10
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}