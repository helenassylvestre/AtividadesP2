/**
# Especificações Batalha Naval

Cada jogador posiciona os seus navios no campo em posições aleatórias

## Tipos de Navio:
- Lancha                (Tamanho: 1 - Quantidade: 5) ?
- Submarino             (Tamanho: 2 - Quantidade: 4 - Quadros: 8)
- Contra-torpedeiros    (Tamanho: 3 - Quantidade: 3 - Quadros: 9)
- Navio-tanque          (Tamanho: 4 - Quantidade: 2 - Quadros: 8)
- Porta-avião           (Tamanho: 5 - Quantidade: 1 - Quadros: 5)
- PosiçãoOcupadas: 30

## Jogadores
- Quantidade: 2

## Passos
Passos para a construção do jogo
1. Definir campos
-- Tamanho fixo (10x10)
-- Limpar campo (~)
-- c_navios_1
-- c_navios_2
-- c_ataque_1
-- c_ataque_2

2. Marcar navios
-- Jogador X coloca navios no campo cnavios1
-- Menu tipo de navios e quantidade
-- Pontos do navio

3. Jogada
-- Jogador 1 faz jogada
-- Pede posição (l, c)
-- Se tiver '.' ok
-- Ver em c_navios_2 (l, c)
--- Se '.' marca '~' em c_ataque_1
--- Se '*' marca '*' em c_ataque_1
---- Incrementar Jogador.Pontuação

4. VerificarVencedor
- Se Jogador.Pontuação == 0 Jogador Ganhou

9. Desenho do Tabuleiro
    0   1   2   3   4   5   6   7   8   9
  -----------------------------------------
0 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
1 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
2 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
3 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
4 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
5 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
6 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
7 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
8 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------
9 |   |   |   |   |   |   |   |   |   |   |
  -----------------------------------------

**/

void main()
{
    //jogar
}
