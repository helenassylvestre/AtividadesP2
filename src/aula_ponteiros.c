#include <stdio.h>

int aula_04()
{
    char header[] = "Aula 04 ==============================";
    char pergunta[] = "Considere o trecho de programa abaixo. Depois de executado, responda quais são os valores associados aos itens de (a) até (g), supondo que os endereços das variáveis u e v são 1130 e 1132, respectivamente.\n";
    int u, v = 45;
    int *pu, *pv = &v;
    u = *pv + 1;
    pu = &u;

    int endereco_u = 1130;
    int endereco_v = 1132;

    system("cls");
    printf("\n<<<<< %s\n", header);
    printf("1. %s\n\n", pergunta);

    printf("Resposta de a)  &v = %d\n", endereco_v);
    printf("Resposta de b)  pv = %d\n", pv);
    printf("Resposta de c) *pv = %d\n", *pv);
    printf("Resposta de d)   u = %d\n", u);
    printf("Resposta de e)  &u = %d\n", endereco_u);
    printf("Resposta de f)  pu = %d\n", pu);
    printf("Resposta de g) *pu = %d\n", *pu);

    printf("%s >>>>>\n", header);

    printf("\n");
    aula_04_rev01();
    printf("\n");
    system("pause");

    return 1;
}

/**
 * Funcao de revisao 01 da aula 06 de programacao. Assunto: Ponteiros
 */
 int aula_04_rev01()
 {
     char variavel;                     /** declaracao da variavel para um tipo char */
     char *ponteiro;                    /** declaracao do ponteiro para um tipo char */

     variavel = 'a';                    /** atribuicao de um valor para a variavel */

     ponteiro = &variavel;              /** atribuicao de um endereco */

     printf("Imprimindo *ponteiro: %c\n", *ponteiro);           /** imprime o conteudo da variavel */

     *ponteiro = 'b';                                           /** atribuicao para alterar o conteudo da variavel */

     printf("Imprimindo variavel: %c\n", variavel);             /** imprime o conteudo da variavel alterado */

     printf("Endereco de ponteiro: %d\n", ponteiro);            /** imprime o endereco do ponteiro */
}







