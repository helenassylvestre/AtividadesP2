/*
* Conteúdo da aula do dia 28/09/2017
*/
#include <stdio.h>
#include <stdlib.h>

int aula_20170928 ()
{
    // code
    int sair = 0;
    char escolha;
    while (!sair) {
        system("cls");
        printf("Aula 28/09\n");
        printf("==============\n");
        printf("1. Atividade A\n");
        printf("2. Atividade B\n");
        printf("3. Atividade C\n");
        printf("4. Atividade D\n");
        printf("0. Sair\n");
        printf("==============\n");
        escolha = getch();
        switch (escolha)
        {
        case '1':
            break;
        case '0':
            sair = 1;
            break;
        default:
            break;
        }
    }
    return 0;
}
