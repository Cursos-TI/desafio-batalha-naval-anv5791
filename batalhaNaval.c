#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    char tabuleiro[10][10];
    int navio01 [3] = {3, 3, 3}; //Navio (coluna 2)
    int navio02 [3] = {3, 3, 3}; //Navio (linha 8)
    int vertical = 1;
    int horizontal = 7;
    int posicao = 2;
    int posicao_vazio_vertical = 1, posicao_vazio_horizontal = 1;


    // Preenchendo o tabuleiro com '0' 
    printf("\n");
            
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    for (int i = 0; i < 3; i++){
        if (tabuleiro[i][vertical]!= '0'){ //verifica o espaço na vertical
            posicao_vazio_vertical = 0;
            break;
        }
    }
    //Coloca navio01 na coluna 2 verticalmente
    if (posicao_vazio_vertical){
        for (int i = 0; i < 3; i++){        
        tabuleiro[i][vertical] = navio01[i] + '0'; 
        }
    }else {
        printf("Erro: sobreposicação detectada no navio vertical\n");
    }

    for (int j = 0; j < 3; j++){        
        if (tabuleiro[horizontal][posicao + j] != '0'){ //verifica o espaço na horizontal
            posicao_vazio_horizontal = 0;
            break;
        }             
    }
    //Coloca navio02 na linha 8 horizontalmente
    if (posicao_vazio_horizontal){
        for (int j = 0; j < 3; j++){        
            tabuleiro[horizontal][posicao + j] = navio02[j] + '0'; 
        }
    }else {
        printf("Erro: sobreposicação detectada no navio horizontal\n");
    }
    
    

    // Imprimindo o tabuleiro
    printf("  ");
    for(char c = 'A'; c <= 'J'; c++){
        printf("%c ", c);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%c ", tabuleiro[i][j]);                      
        }
        printf("\n");
        
    }
printf("\n");    
printf("O Navio 01 está na posição ");
for (int i = 0; i < 3; i++){
    char letra_coluna = 'A' + vertical;
    printf("%c%d", letra_coluna, i);
    if (i < 2) printf(", ");
}
printf("\nO Navio 02 está na posição ");
for (int j = 0; j < 3; j++){
    char letra_coluna = 'A' + (posicao + j);
    printf("%c%d", letra_coluna, horizontal);
    if (j < 2) printf(", ");
}
printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
