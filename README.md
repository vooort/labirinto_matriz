# 🇧🇷 Jogo de Labirinto em C

Este é um pequeno jogo de labirinto desenvolvido em C como trabalho para a matéria de **Inteligência Artificial Computacional**, lecionada pelo professor **Denis Mayr**.

## Sobre o Projeto

O objetivo do projeto é criar um programa simples onde um personagem, representado por `S`, deve navegar por um mapa até chegar ao seu destino, `G`.

Para isso, foram aplicados conceitos básicos da linguagem C, como:

  - Criação de um mapa usando uma matriz (array de duas dimensões).
  - Uso de funções para organizar o código (uma para desenhar o mapa e outra para mover o personagem).
  - Aplicação de estruturas de controle `if` e `switch` para tomar decisões, como verificar se o jogador colidiu com uma parede.
  - Utilização de um loop `while` para manter o jogo em execução até que o jogador vença.

## Como Jogar

As regras são simples:

  - O jogador controla o **`S`**.
  - O objetivo é chegar no **`G`**.
  - O **`.`** representa o caminho livre.
  - O **`#`** representa uma parede, que bloqueia o caminho.

Para movimentar o personagem, o jogador utiliza as seguintes teclas, pressionando `Enter` após cada comando:

  - `w` (para cima)
  - `s` (para baixo)
  - `a` (para a esquerda)
  - `d` (para a direita)

O jogo termina quando o jogador consegue levar o `S` até o `G`. Se o jogador tentar realizar um movimento inválido (colidir com uma parede ou sair dos limites do mapa), o programa exibirá um aviso e o personagem permanecerá na posição anterior.

Of course\! Here is the README translated into English.

-----

# 🇺🇸 Maze Game in C

This is a small maze game developed in C as an assignment for the **Computational Artificial Intelligence** course, taught by Professor **Denis Mayr**.

## About the Project

The project's goal is to create a simple program where a character, represented by `S`, must navigate through a map to reach its destination, `G`.

To achieve this, basic concepts of the C language were applied, such as:

  - Creating a map using a matrix (a two-dimensional array).
  - Using functions to organize the code (one to draw the map and another to move the character).
  - Applying `if` and `switch` control structures to make decisions, such as checking if the player has hit a wall.
  - Using a `while` loop to keep the game running until the player wins.

## How to Play

The rules are simple:

  - The player controls the **`S`**.
  - The objective is to reach the **`G`**.
  - The **`.`** represents a free path.
  - The **`#`** represents a wall, which blocks the path.

To move the character, the player uses the following keys, pressing `Enter` after each command:

  - `w` (up)
  - `s` (down)
  - `a` (left)
  - `d` (right)

The game ends when the player successfully moves the `S` to the `G`. If the player attempts an invalid move (colliding with a wall or going out of the map's bounds), the program will display a warning, and the character will remain in its previous position.
