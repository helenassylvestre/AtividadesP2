/** @file auxiliar.c @brief Biblioteca com funcoes auxiliares uteis. */
#include <stdio.h>
#include <string.h>
#include <time.h>

/**
 * @brief       Funcao que verifica uma string se o seu conteudo eh um numero.
 * @author      Hadston Nunes
 * @version     0.1.0 Versao inicial da funcionalidade
 * @todo        Adicione um parametro string a esta funcao.
 * @param       char sPalavra Uma Sequencia de caracter que pode estar carregando um numero.
 * @return      int 0 para falso e 1 para verdadeiro.
 */
int aux_isNumber (char cCaracter /**< Caracter que pode estar carregando um numero. */)
{
    int Retorno = 0;                    /** Variavel usada para controle do retorno da funcao. */
    int i;                              /** Variavel contador */
    char cI;

    for (i=0; i<=9; i++)
    {

        itoa(i, &cI, 10);

        if (cCaracter == cI)
        {
            Retorno = 1;
            return Retorno;
        }
    }

    return 0;
}

void testa_isNumber()
{
    //code
    printf("Digite um valor: ");
    char digitado = getch();
    printf("%c", digitado);

    if(aux_isNumber(digitado)){
        printf("\nÉ número.\n");
    } else {
        printf("\nNão é número!\n");
    }

    system("pause");
}

/** @example auxiliar.c
 * Exemplo de uso em um bloco if.
 */

 int aux_delay (time_t intervalo)
 {
    time_t inicio, fim;
    time(&inicio);
    do {
        time(&fim);
    } while ((fim - inicio) < intervalo);
    return (fim - inicio);
 }
