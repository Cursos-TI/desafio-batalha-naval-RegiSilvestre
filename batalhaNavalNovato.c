#include <stdio.h>
#define TAM 10
#define AGUA 0
#define NAVIO 3


int main() {
    int tabuleiro[TAM][TAM];
    int i, j;
   
    
    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navio na horizontal
    int linhaNavioH = 3; // posição inicial da linha
    int colunaNavioH = 1; // posição inicial da coluna

    for (int i = 0; i < NAVIO; i++)
    {
        tabuleiro[linhaNavioH] [colunaNavioH + i] = NAVIO;
    }
    
    // Posiciona navio na vertical
    int linhaNavioV = 5; // posição inicial da linha
    int colunaNavioV = 7; // posição inicial da coluna

    for (int i = 0; i < NAVIO; i++)
    {
        tabuleiro[linhaNavioV + i][colunaNavioV] = NAVIO;
    }
    
    
    printf(" TABULEIRO BATALHA NAVAL \n");
    // Imprime o cabeçalho das colunas com letras A-J
    printf("   ");// espaço para alinhar o cabeçalho com as linhas abaixo.
    for (j = 0; j < TAM; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // Imprime o tabuleiro, numerando as linhas de 1 a 10
    for (i = 0; i < TAM; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}