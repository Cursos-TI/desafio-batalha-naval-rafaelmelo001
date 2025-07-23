#include <stdio.h>

#define quantidadelinha 10 // Define a quantiade fixa do tamanho do tabuleiro em linhas;
#define quantidadecoluna 10 // Define a quantiade fixa do tamanho do tabuleiro em colunas;


int main()
{
    int linha, coluna; // variaveis que irão receber os incrementos do FOR para percorrer o tabuleiro;
    int novoValor; // Variavel para inserir novos valores no tabuleiro;

    int tabuleiro[quantidadelinha][quantidadecoluna] = {    {0,0,0,0,0,0,0,0,0,0},
                                                            {0,0,0,0,0,0,0,0,0,0},
                                                            {0,0,0,0,0,0,0,0,0,0},
                                                            {0,0,0,0,0,0,0,0,0,0},
                                                            {0,0,0,0,0,0,0,0,0,0},      // TABULEIRO DE BATALHA NAVAL;
                                                            {0,0,0,0,0,0,0,0,0,0},
                                                            {0,0,0,0,0,0,0,0,0,0},
                                                            {0,0,0,0,0,0,0,0,0,0},
                                                            {0,0,0,0,0,0,0,0,0,0},
                                                            {0,0,0,0,0,0,0,0,0,0}    };

    printf("----------------------------------------\n\n");
    printf("    A B C D E F G H I J\n");

    for(linha = 0; linha < quantidadelinha; linha++) // FOR para percorrer a linha do tabuleiro;
    {
        printf("%2d|", linha + 1); // Imprime o número da linha antes de cada linha do tabuleiro;
        for(coluna = 0; coluna < quantidadecoluna; coluna++) // FOR para percorrer as coluas do tabuleiro;
        {
            printf(" %d", tabuleiro[linha][coluna]);// exibir tabuleiro, chamando "nome_da_matriz[linha] e [coluna]";
        }
        printf("\n");
    }
    
    printf("----------------------------------------\n\n");
    printf("\n\nValor da linha 4 e coluna 7: %d\n",tabuleiro[3][6]);
    printf("Insira um novo valor para linha 8 e coluna 2: \n");
    scanf(" %d", &tabuleiro[3][6]);

     for(linha= 0; linha < quantidadelinha; linha++)
    {
        printf("%2d|", linha + 1); // Imprime o número da linha antes de cada linha do tabuleiro
        for(coluna = 0; coluna < quantidadecoluna; coluna++)
        {
            printf(" %d", tabuleiro[linha][coluna]);
        }
        printf("\n");
    
    }
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso;
}