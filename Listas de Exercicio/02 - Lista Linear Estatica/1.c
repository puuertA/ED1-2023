/*
1. Desenvolva um programa em Linguagem C que permita fazer as seguintes operações
sobre uma lista linear estática de números inteiros positivos:
a. Inserir um elemento em uma posição específica;
b. Remover um elemento de uma posição específica;
c. Acessar um elemento de uma posição específica;
d. Procurar um determinado elemento;
e. Exibir os elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TF 10

typedef struct sLista
{
    int valor[TF];
    int n;
} LISTA;

int inicializar(LISTA *L)
{
    L->n = -1;
}

int cheia(LISTA *L)
{
    if(L->n=1 == T)
        return 1;
    else
        return 0;
}

int vazia(LISTA *L)
{
    if(L->n == -1)
        return 1;
    else
        return 0;
}

int inserirPosicaoEspecifica(LISTA *L, int posicao, int elemento)
{
    if(cheia(L))
    {
        printf("\nERRO: lista cheia!");
        return 1;
    }
    else if(posicao < 0 || posicao > L->n)
    {
        printf("\nERRO: posicao para inserção fora dos limites");
        return 1;
    }
    else
    {
        int i;

        for(i=(L->n+1); i >= pos; i--)
        {
            L->valor[i] = L->n[i-1];
        }

        L->valor[pos] = elem;
        L->n = L->n+1;
        printf("\nElemento inserido na posição escolhida!");
        return 0;
    }
}

int removerPosicaoEspecifica(LISTA *L, int posicao)
{
    if(vazia(L))
    {
        printf("\nERRO: lista vazia!");
        return 1;
    }
    else if(posicao < 0 || posicao > L->n+1)
    {
        printf("")
    }
}

int menu()
{
    int op;
    printf("\n+----------------------------+");
    printf("\n|          MENU LISTA        |");
    printf("\n+----------------------------+");
    printf("\n|1 - Inserir pos. especifica |");
    printf("\n|2 - Remover pos. especifica |");
    printf("\n|3 - Acessar pos. especifica |");
    printf("\n|4 - Procurar det. elemento  |");
    printf("\n|5 - Exibir os elementos     |");
    printf("\n|6 - Inserir no fim          |");
    printf("\n+----------------------------+");
    printf("\n\nEscolha uma opcao\n>>> ");
    scanf("%d", &op);
    return op;
}

void main()
{
    LISTA L;
    inicializar(&L);
    int op;

    do
    {
        op = menu();
        switch(op)
        {
        case 1:
            ;
            int pos = 0, elem = 0;

            printf("\n\nIndique a posicao que o elemento sera inserido\n>>> ");
            scanf("%d", &pos);


            printf("\n\nIndique o elemento que sera inserido\n>>> ");
            scanf("%d", &elem);

            inserirPosicaoEspecifica(&L,pos,elem);

            printf("\n");
            system("pause");
            system("clear||cls");
            break;

        case 2:
            ;
            printf("\n\nIndique a posicao que o elemento sera removido\n>>> ");
            scanf("%d", &pos);

            removerPosicaoEspecifica(&L, pos);

            printf("\n");
            system("pause");
            system("clear||cls");
            break;

        case 3:
            ;
            printf("\n\nIndique a posicao que o elemento sera acessado\n>>> ");
            scanf("%d", &pos);

            printf("Elemento da posicao %d: %d", pos, acessar(&L, pos));

            printf("\n");
            system("pause");
            system("clear||cls");
            break;

        case 4:
            ;
            int val = 0;

            printf("\n\nIndique o elemento a ser buscado\n>>> ");
            scanf("%d", &val);

            printf("Posicao do elemento %d: %d", val, buscar(&L, val));

            printf("\n");
            system("pause");
            system("clear||cls");
            break;

        case 5:
            ;
            printf("\nExibindo os elementos da lista: \n\n");
            imprimir(&L);

            printf("\n");
            system("pause");
            system("clear||cls");
            break;
        default:
            ;
            printf("\nInsira uma opcao valida");
        }
    }
    while(op!=0);
}


