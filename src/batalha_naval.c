/*
* Documento de especifica��es:
* C:\Suporte\Documentos\Google Drive\Fatec\Programa��o 2\Projetos\atividades\docs\Especifica��es do Jogo.docx
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
    char nome[20];
};

struct tabuleiro
{
    //talvez n�o precise deste registro
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
* Declara��es
*/
int batalha_naval();
void desenharTela();
int capturarMenu();
struct campo marcarNavios();
int menuPosicao;
int menuSelecionado;

/*
* Fun��o Principal
*/
int batalha_naval()
{
    int continua;
    //jogar
    desenharTela(1, 0);
    menuPosicao = 2;

    while (continua) {
        continua = capturarMenu();

    }

    return 1;
}

/*
* Fun��o desenharTela
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
    case 1: // intro
        system("cls");
        printf("===============================================================================\n");
        printf("                                                                               \n");
        printf("                                     -*+*+                -                    \n");
        printf("    Trabalho de Programa��o    -+*+  *:+#+@-  -  :+-   -+W#           -=-      \n");
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
    case 2: // menu
        linha_1 = "                             =      JOGAR       =                              \n";
        linha_2 = "                             =      PAUSE       =                              \n";
        linha_3 = "                             =    COMO JOGAR    =                              \n";
        linha_4 = "                             =     PONTUA��O    =                              \n";
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
            linha_4 = "                             = >   PONTUA��O  < =                              \n";
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
    case 3: // prepara

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
* Fun��es capturarMenu
*/
int capturarMenu ()
{
    char tecla;

    tecla = getch();
    if (tecla == -32) {
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
            return menuPosicao;
        }
    }

    if (menuPosicao < 1){ menuPosicao = 1; }
    if (menuPosicao > 5){ menuPosicao = 5; }

    desenharTela(2, menuPosicao);

    return 9;
}
