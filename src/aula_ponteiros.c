
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
    return 1;
}
