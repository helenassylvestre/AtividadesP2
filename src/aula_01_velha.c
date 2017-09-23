#include <stdio.h>
#include <stdlib.h>

int aula_01()
{
    // Declaração de Variáveis
    char tabuleiro[3][3];
    int ganhou = 0; // 0 = não ganhou | 1 = ganhou
    int linha, coluna; // posição escolhida pelo jogador
    int l, c; // contadores de linha e coluna
    char jogador = 'x'; // Regra: Toda partida é inicializada com o Jogador x
    int numJogadas = 0; // Controla o número de jogadas

    char saida = '0';

    // Limpa o tabuleiro com *

    for (l=0; l<3; l++)
    {
        for (c=0; c<3; c++)
        {
            tabuleiro[l][c] = '*';
        }
    }

    while ((numJogadas<9) && (ganhou==0))
    {
        // Imprimir tabuleiro
        system("cls");

        printf("\n********** JOGO DA VELHA **********\n\n");

        fflush(stdin);
        saida = getchar();

        if (saida == '0')
            break;
    }
    return 1;
}
