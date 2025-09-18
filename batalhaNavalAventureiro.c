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

    printf("\n====Validação dos Posicionamentos e Sobreposições dos Navios===\n");

    //Validar Posições Horizontal e Sobreposição
    int linhaInicioH = 3;
    int colunaInicioH = 1;

    int linhaFimH = linhaInicioH;
    int colunaFimH = colunaInicioH + NAVIO - 1;
    int podePosicionar = 1;
    
    // Posiciona navio na horizontal
    if (linhaInicioH >= 0 && linhaFimH <= TAM && colunaInicioH >= 0 && colunaFimH <=TAM)
    {
        printf("✅Posição Horizontal Válida! O navio cabe no tabuleiro. \n");

        for (int i = 0; i < NAVIO; i++)
    {
        if (tabuleiro[linhaInicioH][colunaInicioH + i] != AGUA)
        {
            printf("❌Erro: Sobreposição! Já existe um navio nesta posição.\n");
            podePosicionar = 0;
            break;
        }
        
    }
    }else
    {
        printf("❌Erro: Posição Horizontal Inválida! O navio não cabe no tabuleiro. \n");
    } 
    
    if (podePosicionar == 1)
    {
        printf("✅Posição Horizontal livre! Colocando Navio no Tabuleiro...\n");

        for (int i = 0; i < NAVIO; i++)
        {
            tabuleiro[linhaInicioH] [colunaInicioH + i] = NAVIO;
        }
        
    }
     
    
       
    // Posiciona navio na vertical e Sobreposição
    int linhaInicioV = 5; // posição inicial da linha
    int colunaInicioV = 7; // posição inicial da coluna
    
    int linhaFimV = linhaInicioV;
    int colunaFimV = colunaInicioV + NAVIO - 1;
    

    // Posiciona navio na Vertical
    if (linhaInicioV >= 0 && linhaFimV <= TAM && colunaInicioV >= 0 && colunaFimV <=TAM)
    {
        printf("✅Posição Vertival Válida! O navio cabe no tabuleiro. \n");

        for (int i = 0; i < NAVIO; i++)
    {
        if (tabuleiro[linhaInicioV + i][colunaInicioV] != AGUA)
        {
            printf("❌Erro: Sobreposição! Já existe um navio nesta posição.\n");
            podePosicionar = 0;
            break;
        }
        
    }
    }else
    {
        printf("❌Erro: Posição Vertical Inválida! O navio não cabe no tabuleiro. \n");
    } 
    
    if (podePosicionar == 1)
    {
        printf("✅Posição Vertical livre! Colocando Navio no Tabuleiro...\n");

        for (int i = 0; i < NAVIO; i++)
        {
            tabuleiro[linhaInicioV + i] [colunaInicioV] = NAVIO;
        }
        
    }
   
    // Posiciona navio na diagonal e Sobreposição
    int linhaInicioD1 = 7; // posição inicial da linha
    int colunaInicioD1 = 2; // posição inicial da coluna

    int linhaFimD1 = linhaInicioD1 + NAVIO - 1;
    int colunaFimD1 = colunaInicioD1 + NAVIO - 1;

    if (linhaInicioD1 >= 0 && linhaFimD1 <= TAM && colunaInicioD1 >= 0 && colunaFimD1 <=TAM)
    {
        printf("✅Posição Diagonal 1 Válida! O navio cabe no tabuleiro. \n");

        for (int i = 0; i < NAVIO; i++)
    {
        if (tabuleiro[linhaInicioD1 - i][colunaInicioD1 + i] != AGUA)
        {
            printf("❌Erro: Sobreposição! Já existe um navio nesta posição.\n");
            podePosicionar = 0;
            break;
        }
        
    }
    }else
    {
        printf("❌Erro: Posição Diagonal 1 Inválida! O navio não cabe no tabuleiro. \n");
    } 
    
    if (podePosicionar == 1)
    {
        printf("✅Posição Diagonal 1 livre! Colocando Navio no Tabuleiro...\n");

        for (int i = 0; i < NAVIO; i++)
        {
            tabuleiro[linhaInicioD1 - i][colunaInicioD1 + i] = NAVIO;
        }
        
    }

    
    // Posiciona navio na diagonal e sobreposição
    int linhaInicioD2 = 4; // posição inicial da linha
    int colunaInicioD2 = 8; // posição inicial da coluna

    int linhaFimD2 = linhaInicioD2 + NAVIO - 1;
    int colunaFimD2 = colunaInicioD2 + NAVIO - 1;

    if (linhaInicioD2 >= 0 && linhaFimD2 <= TAM && colunaInicioD2 >= 0 && colunaFimD2 <=TAM)
    {
        printf("✅Posição Diagonal 2 Válida! O navio cabe no tabuleiro. \n");

        for (int i = 0; i < NAVIO; i++)
    {
        if (tabuleiro[linhaInicioD2 - i][colunaInicioD2 - i] != AGUA)
        {
            printf("❌Erro: Sobreposição! Já existe um navio nesta posição.\n");
            podePosicionar = 0;
            break;
        }
        
    }
    }else
    {
        printf("❌Erro: Posição Diagonal 2 Inválida! O navio não cabe no tabuleiro. \n");
    } 
    
    if (podePosicionar == 1)
    {
        printf("✅Posição Diagonal 2 livre! Colocando Navio no Tabuleiro...\n");

        for (int i = 0; i < NAVIO; i++)
        {
            tabuleiro[linhaInicioD2 - i][colunaInicioD2 - i] = NAVIO;
        }
        
    }

    
    // Imprime o cabeçalho das colunas com letras A-J
    printf("\nTABULEIRO BATALHA NAVAL\n");
   
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