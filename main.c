#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define tam 5

//função para mover o S
void mover(char direc, int v[2])
{
    
    switch(direc)
    {
        case 'w':
        v[0] -= 1;
        break;
        
        case 's':
        v[0] += 1;
        break;
        
        case 'd':
        v[1] += 1;
        break;
        
        case 'a':
        v[1] -= 1;
        break;
        
        default :
        break;
    }
    
}
//função para construir matriz
void matriz(int v[2], char col[tam][tam])
{
    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(i == v[0] && j == v[1])
            {
                printf("S  ");
            }
            else
            {
                printf("%c  ", col[i][j]);
            }
        }
        printf("\n");
    }
}

//função para determinar a heurística com a formula de manhattan
int manhattan(int v[2],int posf[2])
{
    return abs(v[0] - posf[0]) + abs(v[1] - posf[1]);
}

int main()
{
    int v[2] = {0,0}, v_ant[2] = {0,0}, posf[2] = {3,4};
    char dir;
    char col[tam][tam] = {
        {'.','.','.','#','.'},
        {'.','#','.','#','.'},
        {'.','#','.','.','.'},
        {'.','.','.','#','G'},
        {'.','#','.','.','.'}
    };
    while(true)
    {
        matriz(v, col); //constrói a matriz
        
        if(col[v[0]][v[1]] == 'G') //verifica a condição de parada que é chegar no G
        {
            printf("Você chegou no destino!");
            break;
        }
        printf("Qual direção você deseja ir? use wasd\n"); //requisita a direção com base no wasd do teclado
        printf("O valor da heurística atual é: %d\n",manhattan(v,posf)); //imprime o valor da heurística com a função manhattan

        scanf(" %c",&dir);
        
        v_ant[0] = v[0];  //armazena a posição atual de S 
        v_ant[1] = v[1];  //armazena a posição atual de S
        
        mover(dir, v);
        
        if ((v[0] < 0 || v[0] >= tam || v[1] < 0 || v[1] >= tam) || (col[v[0]][v[1]] == '#')) //verifica se a posição atual não viola alguma das restrições
        {
            printf("\nMovimento inválido! Você bateu.\n");
            v[0] = v_ant[0];
            v[1] = v_ant[1];
        }
    }
    return 0;
}
