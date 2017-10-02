/*
* Documento de especificações:
* C:\Suporte\Documentos\Google Drive\Fatec\Programação 2\Projetos\atividades\docs\Especificações do Jogo.docx
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*
* Registros
*/
struct embarcacoes
{
    char nome[20];
    int tamanho;
    int quantidade;
};

struct campos
{
    int jogador_id;
    char navios[1];
    char ataques[1];
} campo;

struct jogadores
{
    int jogador_id;
    char nome[15];
    int blocos_ocupados;
};

struct tabuleiro
{
    //talvez não precise deste registro
};

struct infos
{
    char titulo[30];
    char tela[15];
    char status[30];
    char linha_1[80];
    char linha_2[80];
    char linha_3[80];
    char linha_4[80];
    char linha_5[80];
    int selecionado;
} info;

/*
* Constantes
*/


/*
* Declarações
*/
int batalha_naval();
void desenharTela();
int capturarMenu();
int definirCampos();

struct campo marcarNavios();
struct jogadores jogadorAtual;
int menuPosicao;
int menuSelecionado;
int telaAtual;

/*
* Função Principal
*/
int batalha_naval()
{
    int idMenu;

    telaAtual = 0;
    desenharTela(telaAtual, 0);
    menuPosicao = 1;

    while (idMenu) {
        idMenu = capturarMenu();
        if (idMenu == 1 && telaAtual == 1) {
            definirCampos();
        }
    }

    return 1;
}

/*
* Função desenharTela
*/
void desenharTela (int tela, int posicao)
{
    char *linha_1;
    char *linha_2;
    char *linha_3;
    char *linha_4;
    char *linha_5;
    // code
    switch (tela)
    {
    case 0: // intro
        system("cls");
        printf("===============================================================================\n");
        printf("                                                                               \n");
        printf("                                     -*+*+                -                    \n");
        printf("    Trabalho de Programação    -+*+  *:+#+@-  -  :+-   -+W#           -=-      \n");
        printf("                               *+++#= -#+  ==-=:*:#-+ ::==+-       ---+:--     \n");
        printf("          24/09/2017             *@+ +#- #+ -#: *+++=:+++-:      -*@##@:- -    \n");
        printf("                                    *@:-=: =+ :#  ++ -: :+:     --  :#:-- -    \n");
        printf("                                      -== +: *+ =#*=**++: +    --  -@:  ---    \n");
        printf("             Jogo              *@- :+*=*:+#:-++:+-#+  : :=-  --- --=+- - -     \n");
        printf("                               +WW+        -++**::+:++*: : *--  - +# - - -     \n");
        printf("                               -WWW=   -:-       :*-   : :+*-*-+--W+- - -      \n");
        printf("         B A T A L H A         -W@=+# -:---       +*:-**:  -#=W# @* - ---      \n");
        printf("                                @WWWW#             +-:-*+-+#*-::=@  -- -       \n");
        printf("              N A V A L          -#WWW=        by      : =-*:++=W: - --        \n");
        printf("                                   -@WW+                     -=+++ -- -        \n");
        printf("                                     +WW-          HADS         *=+:--         \n");
        printf("                                     -:W# :***#+                  *= -         \n");
        printf("                                  -==**-@+  :#--==@#**+:++         -=          \n");
        printf("        h4mnsoft@gmail.com       =:  ::   -:   :+-        -+*##+:-  *          \n");
        printf("                                  :#:  -:-  -::   -:    -  :+- -*==@:          \n");
        printf("                                     :=#+-        ----   -:-      -+**:        \n");
        printf("                                           :+=====*****======*+-               \n");
        printf("                                                                               \n");
        printf("===============================================================================\n");
        printf("Pressione qualquer tecla para continuar...");
        break;
    case 1: // menu
        linha_1 = "                             =      JOGAR       =                              \n";
        linha_2 = "                             =      PAUSE       =                              \n";
        linha_3 = "                             =    COMO JOGAR    =                              \n";
        linha_4 = "                             =     PONTUAÇÃO    =                              \n";
        linha_5 = "                             =       SAIR       =                              \n";

        switch (posicao)
        {
        case 1:
            linha_1 = "                             = >    JOGAR     < =                              \n";
            break;
        case 2:
            linha_2 = "                             = >    PAUSE     < =                              \n";
            break;
        case 3:
            linha_3 = "                             = >  COMO JOGAR  < =                              \n";
            break;
        case 4:
            linha_4 = "                             = >   PONTUAÇÃO  < =                              \n";
            break;
        case 5:
            linha_5 = "                             = >     SAIR     < =                              \n";
            break;
        }
        system("cls");
        printf("BATALHA NAVAL - Menu                                                           \n");
        printf("===============================================================================\n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                   M E N U                                     \n");
        printf("                                                                               \n");
        printf("                             ====================                              \n");
        printf("%s", linha_1);
        printf("%s", linha_2);
        printf("%s", linha_3);
        printf("%s", linha_4);
        printf("%s", linha_5);
        printf("                             ====================                              \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("===============================================================================\n");
        break;
    case 2: // prepara Nome do Jogador
        system("cls");
        printf("BATALHA NAVAL - Preparação                                          Jogador #%d \n", jogadorAtual.jogador_id);
        printf("===============================================================================\n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                 ============================================                  \n");
        printf("                 =                                          =                  \n");
        printf("                 =                                          =                  \n");
        printf("                 =      Digite o nome do Jogador #%d:        =                  \n", jogadorAtual.jogador_id);
        printf("                 =                                          =                  \n");
        printf("                 =                                          =                  \n");
        printf("                 ============================================                  \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("                                                                               \n");
        printf("===============================================================================\n");
        break;
    case 3: // prepara Navios
        system("cls");
        printf("BATALHA NAVAL - Preparação                                 Blocos restantes: 30\n");
        printf("=============================================|=================================\n");
        printf("    0   1   2   3   4   5   6   7   8   9    |                                 \n");
        printf("  -----------------------------------------  |  Nome do Jogador #1:            \n");
        printf("0 |<+>|   |   |   |   |   |   |   |   |   |  |  [%s]\n", jogadorAtual.nome);
        printf("  -----------------------------------------  |                                 \n");
        printf("1 |   |   |   |   |   |   |   |   |   |   |  |  Navios (tamanho):              \n");
        printf("  -----------------------------------------  |  1. Submarino (2 blocos)        \n");
        printf("2 |   |   |   |   |   |   |   |   |   |   |  |  2. Contratorpedeiro (3 blocos) \n");
        printf("  -----------------------------------------  |  3. Navio-tanque (4 blocos)     \n");
        printf("3 |   |   |   |   |   |   |   |   |   |   |  |  4. Porta-avião (5 blocos)      \n");
        printf("  -----------------------------------------  |                                 \n");
        printf("4 |   |   |   |   |   |   |   |   |   |   |  |  Blocos ocupados:               \n");
        printf("  -----------------------------------------  |  [%s] blocos\n", jogadorAtual.blocos_ocupados);
        printf("5 |   |   |   |   |   |   |   |   |   |   |  |                                 \n");
        printf("  -----------------------------------------  |                                 \n");
        printf("6 |   |   |   |   |   |   |   |   |   |   |  |                                 \n");
        printf("  -----------------------------------------  |                                 \n");
        printf("7 |   |   |   |   |   |   |   |   |   |   |  |                                 \n");
        printf("  -----------------------------------------  |                                 \n");
        printf("8 |   |   |   |   |   |   |   |   |   |   |  |                                 \n");
        printf("  -----------------------------------------  |                                 \n");
        printf("9 |   |   |   |   |   |   |   |   |   |   |  |                                 \n");
        printf("  -----------------------------------------  | ");
        break;
    case 4: // quadro
        break;
    case 5: // estatistica
        break;
    case 6: // ganhou-perdeu
        break;
    default:
        printf("WEEErrOoo!\n");
        break;
    }

}

/*
* Funções capturarMenu
*/
int capturarMenu ()
{
    int tecla;

    fflush(stdin);
    tecla = getch();

    if (tecla == 224) {
        tecla = getch();
        switch (tecla)
        {
        case 72: // Seta acima
            menuPosicao--;
            break;
        case 80: // Seta abaixo
            menuPosicao++;
            break;
        }
    } else {
        if (tecla == 13 && menuPosicao == 5){
            return 0;
        }
        if (tecla == 13){
            if (telaAtual >= 1) {
                return menuPosicao;
            }
            if (telaAtual == 0) {
                telaAtual = 1;
            }
        }
    }

    if (menuPosicao < 1){ menuPosicao = 1; }
    if (menuPosicao > 5){ menuPosicao = 5; }

    desenharTela(telaAtual, menuPosicao);

    return 9;
}

int definirCampos()
{
    // criar matriz com structs
    struct embarcacoes navios[30];
    navios[1].nome = "Submarino";


    for (jogadorAtual.jogador_id = 1; jogadorAtual.jogador_id <= 2; jogadorAtual.jogador_id++) {
        desenharTela(2, 0);
        //fgets(jogadorAtual.nome, 15, stdin);
        scanf("%s", jogadorAtual.nome);
        desenharTela(3, 0);

        getch();
    }

}
