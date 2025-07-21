#include <stdio.h>

int dimensao = 10;

void inicioTabuleiro(char tabuleiro[dimensao][dimensao]) {
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < dimensao; j++) {
            tabuleiro[i][j] = '0'; // '0' representa água
        }
    }
}

void imprimirTabuleiro(char tabuleiro[dimensao][dimensao]) {
    printf("   A B C D E F G H I J\n");
    
    for (int i = 0; i < dimensao; i++) {
        printf("%2d| ", i + 1);
        for (int j = 0; j < dimensao; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
}



int main() {
    char tabuleiro[dimensao][dimensao];

    inicioTabuleiro(tabuleiro);
    imprimirTabuleiro(tabuleiro);

    return 0;
}