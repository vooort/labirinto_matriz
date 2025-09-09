# Jogo de Labirinto em C

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
