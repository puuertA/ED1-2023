#include <stdio.h>
#define TAMF 10

typedef struct lista
{
    int valor[TAMF];
    int n;
}LISTA;

void listaInicializar(LISTA *L)
{
    L->n = -1;
}

int listaInserirFim(LISTA *L, int elem)
{
    if(listaCheia(L))
    {
        printf("\nERRO: lista cheia!");
        return 1;
    }
    L->valor[L->n+1] = elem;
    L->n = L->n+1;

    return 0;
}

void main()
{
    LISTA L;
    listaInicializar(&L);
}


