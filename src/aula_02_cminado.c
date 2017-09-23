#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>

#define TAM 20
/**

O campo minado é um teste de memória e raciocínio aparentemente simples. É um dos
jogos do windows mais populares de todos os tempos. O objetivo é encontrar os
quadrados vazios e evitar as minas.

Regras e noções básicas
=========================

Objetivo
==========
Encontrar os quadrados vazios e evitar as minas. Quanto mais rápido você
esvaziar o tabuleiro, melhor será sua pontuação.

Tabuleiro
==========
O campo minado possui três opções de tabuleiros, cada um deles progressimamente
mais difícil que o outro.
* Iniciante - 81 Quadrados e 10 Minas
* Intermediário - 256 Quadrados e 40 Minas
* Avançado - 480 Quadrados e 99 Minas

Também é possível criar um tabuleiro personalizado clicando no menu jogo e em
opções. O campo minado permite tabuleiros com até 720 quaddrados e 668 minas.

Como Jogar
==========
As regras do campo minado são simples:
1. Clique em um quadrado ara ver quantas minas estão ao redor dele. Para vencer,
vire todos o quadraados sem revelar uma mina.

2. Se você descobrir uma mina, o jogo acaba.

3. Se descobrir um quadrado vazio, você continua jogando.

4. Se parecer um número, ele informará quantas minas estão escondidas nos oito
quadrados que o cercam. Você usa essa informação para deduzir em que quadrados
próximos é seguro clicar.

Sugestões e Dicas
====================
* Marque as minas. Se você suspeita que um quadrado contém uma mina, clique nele
com o botão direito do mouse.Isso marca o quadrado com uma bandeira.(Se não
tiver certeza, clique com o botão direito do mouse novamente para inserir um
ponto de interrogação.)
* Estude os padrões. Se três quadrados seguidos exibirem os números 2, 3 e 2,
provavelmente haverá três minas alinhadas ao lado desses números.Se um quadrado
mostrar o número 8, todos os quadrados que o circundam estarão minados.
* Explore o desconhecido. Não sabe onde clicar em seguida?Tente esvaziar algum
território inexplorado.É melhor clicar no meio dos quadrados que não estão
marcados do que em uma área que você suspeita estar minada.

Requisitos passados pela Professora
*- Campo
*- CampoUsuario OK
*- PopularBombas
*- PreencherDicas
*- Navegação

**/

// Definições dos objetos
void definirTamanhoCampo (int *ptamL, int *ptamC);
void limparCampoUsuario (char campoUsuario[TAM][TAM]);
void limparCampo (char campo[TAM][TAM]);
void imprimirCampoUsuario (char campoUsuario[TAM][TAM], int tamL, int tamC);
void definirNivelDoJogo (int *p_QtdBombas, int tamL, int tamC);
void lancarBombas(char campo[TAM][TAM], int qtdBombas, int tamL, int tamC);
void lancarNumeros(char campo[TAM][TAM], int tamL, int tamC);
int jogar (int tamL, int tamC, int qtdBombas, char campoUsuario[TAM][TAM], char campo[TAM][TAM]);

int aula_08()
{
    char campo[TAM][TAM];
    char campoUsuario[TAM][TAM];
    int tamL, tamC;
    int qtdBombas;

    // Definir a matriz "campoUsuario"
    definirTamanhoCampo(&tamL, &tamC);

    // Definir Nivel do Jogo
    definirNivelDoJogo(&qtdBombas, tamL, tamC);
    printf("\nQuantidade de Bombas: %d\n", qtdBombas);
    system("pause");

    // Limpar e configurar a matriz "campoUsuario"
    limparCampoUsuario(campoUsuario);
    imprimirCampoUsuario(campoUsuario, tamL, tamC);

    // Limpar e configurar a matriz "campo" - DEBUG
    limparCampo(campo);
    imprimirCampoUsuario(campo, tamL, tamC);

    // Lançar bombas
    lancarBombas(campo, qtdBombas, tamL, tamC);
    imprimirCampoUsuario(campo, tamL, tamC);

    printf("\n*** QTD BOMBAS: %d***\n\n", qtdBombas);

    printf("\n*** antes debug ***\n\n");
    lancarNumeros(campo,tamL, tamC);
    printf("\n*** depois debug ***\n\n");

    imprimirCampoUsuario(campo, tamL, tamC);

    jogar(tamL, tamC, qtdBombas, campoUsuario, campo);

    system("pause");
    return 0;
}
void definirTamanhoCampo (int *ptamL, int *ptamC)
{
    printf("\n*** BEMVINDO AO CAMPO MINADO ***\n\n");

    do {
        printf("\nDigite a qtd de linhas do campo minado: ");
        scanf("%d", ptamL);

        printf("\nDigite a qtd de colunas do campo minado: ");
        scanf("%d", ptamC);

        if (*ptamL < 2 || *ptamL > TAM || *ptamC < 2 || *ptamC > TAM) {
            printf("\nDimensões inválidas! Tente novamente... ");
            //getchar();
        }
    } while (*ptamL < 2 || *ptamL > TAM || *ptamC < 2 || *ptamC > TAM);
}
void limparCampoUsuario (char campoUsuario[TAM][TAM])
{
    int l, c;
    for (l=0; l<TAM; l++) {
        for (c=0; c<TAM; c++) {
            campoUsuario[l][c] = '-';
        }
    }
}
void limparCampo (char campo[TAM][TAM])
{
    int l, c;
    for (l=0; l<TAM; l++) {
        for (c=0; c<TAM; c++) {
            campo[l][c] = '0';
        }
    }
}
void imprimirCampoUsuario (char campoUsuario[TAM][TAM], int tamL, int tamC)
{
    int l, c;

    system("cls");
    printf("\n*** BEMVINDO AO CAMPO MINADO ***\n\n");

    for (c=0; c<tamC+1; c++ ) {
        if (c > 0) {
            printf("-"); // Imprimir cabeçalhos das colunas
        }
        printf(" %2d ", c); // Imprimir cabeçalhos das colunas
    }
    printf("\n");

    for (l=0; l<tamL; l++) {
        printf(" %2d  ", l+1); // Imprimir cabeçalhos das linhas
        for (c=0; c<tamC; c++) {
            printf("  %c  ", campoUsuario[l][c]);

            /*
            if (c % 2 == 0) {
                system("color 01");
            } else {
                system("color 0e");
            }
            */
        }
        printf("\n");
    }
}
void definirNivelDoJogo (int *p_QtdBombas, int tamL, int tamC)
{
    int opcao = 0;
    while (opcao < 1 || opcao > 3)
    {
        printf("\nEscolha o nível do seu jogo: ");
        printf("\n     1 - FACIL");
        printf("\n     2 - MÉDIO");
        printf("\n     3 - DIFÍCIL");
        printf("\nOpção escolhida: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            *p_QtdBombas = round((tamL * tamC) * 0.15);
            break;
        case 2:
            *p_QtdBombas = round((tamL * tamC) * 0.5);
            break;
        case 3:
            *p_QtdBombas = round((tamL * tamC) * 0.75);
            break;

        default:
            printf("Opção inválida! Tente novamente...");
            break;
        }
    }
}
void lancarBombas(char campo[TAM][TAM], int qtdBombas, int tamL, int tamC)
{
    int b;
    srand(time(NULL));
    int aleatL, aleatL_last;
    int aleatC, aleatC_last;

    for (b=0; b<qtdBombas; b++) {
        aleatL_last = aleatL;
        aleatC_last = aleatC;
        aleatL = rand() % tamL;
        aleatC = rand() % tamC;

        if (aleatC != aleatC_last && aleatL != aleatL_last){
            campo[aleatL][aleatC] = '*';
        } else {
            b--;
        }
    }
}

void lancarNumeros(char campo[TAM][TAM], int tamL, int tamC)
{
    int l, c, countBomba;


        for (l=0; l<tamL; l++) {
            for (c=0; c<tamC; c++) {

                if (campo[l][c] != '*') { // Se não for bomba
                    countBomba = 0;
                    //fazer o relógio
                    if (campo[l-1][c]   == '*' && (l-1>=0))                 { countBomba++; }
                    if (campo[l-1][c+1] == '*' && (l-1>=0) && (c+1<tamC))   { countBomba++; }
                    if (campo[l][c+1]   == '*' && (c+1<tamC))               { countBomba++; }
                    if (campo[l+1][c+1] == '*' && (l+1<tamL) && (c+1<tamC)) { countBomba++; }
                    if (campo[l+1][c]   == '*' && (l+1<tamL))               { countBomba++; }
                    if (campo[l+1][c-1] == '*' && (l+1<tamL) && (c-1>=0))   { countBomba++; }
                    if (campo[l][c-1]   == '*' && (c-1>=0))                 { countBomba++; }
                    if (campo[l-1][c-1] == '*' && (l-1>=0) && (c-1>=0))     { countBomba++; }
                    campo[l][c] = (char)(countBomba + 48);
                }
            }
        }
}

int jogar (int tamL, int tamC, int qtdBombas, char campoUsuario[TAM][TAM], char campo[TAM][TAM])
{
    int i, numJogadas, linha, coluna;

    numJogadas = (tamL * tamC) - qtdBombas;

    for (i=0; i<numJogadas; i++) {
        printf("\n\nEscolha a linha e a coluna que deseja jogar: ");
        scanf("%d %d", &linha, &coluna);

        if ((linha > 0 && linha <= tamL) && (coluna > 0 && coluna <= tamC)) {

            if (campoUsuario[linha-1][coluna-1] == '-') { // Se jogada válida (posição nunca foi jogada)
                if (campo[linha-1][coluna-1] == '*') { // Se tiver bomba --> GAME OVER
                    printf("\n\n GAME OVER!!! \n\n");
                    return 0;
                } else { // Se não tiver bomba --> Marca número
                    campoUsuario[linha-1][coluna-1] = campo[linha-1][coluna-1];
                }
            } else {
                printf("\n\nJogada já realizada! Tenta novamente... \n\n");
                i--;
            }

        } else {
            printf("\n\nJogada já realizada! Tenta novamente... \n\n");
            i--;
        }
        imprimirCampoUsuario(campoUsuario, tamL, tamC);
    }
    printf("\n\n PARABÉNS!!! VOCÊ GANHOU A PARTIDA!!!\n\n");
    return 1;
}
