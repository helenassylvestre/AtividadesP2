# AtividadesP2

## Atividades das aulas de Programação 2
Atividades desenvolvidas durantes as aulas de Programação II do curso de Jogos Digitais da Fatec de Americana de 2017.
- Um compilado de todos os exercícios passados em aula no formato de um único arquivo com menu e outros arquivos separados em módulos pra cada aula.

# Levantamento de Requisitos
BRAINSTORM 23/09/2017 
## ESPECIFICAÇÕES BATALHA NAVAL
Cada jogador posiciona os seus navios no campo em posições aleatórias
### TIPOS DE NAVIO:
-	Submarino (Tamanho: 2 - Quantidade: 4 - Quadros: 8)
-	Contratorpedeiros (Tamanho: 3 - Quantidade: 3 - Quadros: 9)
-	Navio-tanque (Tamanho: 4 - Quantidade: 2 - Quadros: 8)
-	Porta-avião (Tamanho: 5 - Quantidade: 1 - Quadros: 5)
-	Posição Ocupadas: 30
### JOGADORES
-	Quantidade: 2
### PASSOS
Passos para a construção do jogo
1.	Definir campos
	-	Tamanho fixo (10x10)
	-	Limpar campo (~)
	-	c_navios_1
	-	c_navios_2
	-	c_ataque_1
	-	c_ataque_2
2.	Imprimir Tabuleiro
3.	Marcar navios
	-	Jogador X coloca navios no campo cnavios1
	-	Menu tipo de navios e quantidade
	-	Pontos do navio
4.	Jogada
	-	Jogador 1 faz jogada
	-	Pede posição (l, c)
	-	Se tiver '.' ok
	-	Ver em c_navios_2 (l, c)
	 	- Se '.' marca '~' em c_ataque_1
	 	- Se '*' marca '*' em c_ataque_1
	 	- Incrementar Jogador.Pontuação
5.	VerificarVencedor
	-	Se Jogador.Pontuação == 0 Jogador Ganhou
6.	Desenho do Tabuleiro
```
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
```
# Agenda P2
## Parte 1 - Linguagem C

### Materias
- Prog 1
- Modularizacao
- Ponteiros
- Manipulacao String
- Arquivos

### Avaliacao
- Pratica 50%
- Projeto: Batalha Naval (Peso: 0.4)
- Avaliacao Laboratorio - 2 aulas (Peso: 0.6)

### Plano de aulas
- 23/09 - Explicacao do jogo
- 28/09 - Manipulacao String
- 30/09 - Manipulacao String 2 / Arquivos
- 05/10 - Arquivos
- 07/10 - (Nao tem aula)
- 12/10 - (Nao tem aula)
- 14/10 - (Nao tem aula)
- 19/10 - Exercicio Pratico (String/Arquivos)
- 21/10 - Prova Pratica

## Parte 2 - Plataforma Unity
### Avaliacao
- Projeto 50%