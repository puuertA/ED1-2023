/*
1)  Fa�a um programa para ler um vetor de 12 posi��es e em seguida ler tamb�m dois
valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa
dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.
*/

#include <stdio.h>

#define T 12

int lerVetor(int vet[])
{
    for(int i=0; i<T; i++)
    {
        printf("\nIndique o %d valor do vetor\n\n>>> ", i);
        scanf("%d", &vet[i]);
    }
}

int exibirVetor(int vet[])
{
    for(int i=0;i<T;i++)
    {
        printf("\n%d - %d", i, vet[i]);
    }
}

int lerX()
{
    int x;
    do
    {
        printf("");
    }
    while (x>=0 || x<11);

}

void main()
{
    int x, y;
    int vet[T];

    lerVetor(vet);
    printf("\nVetor lido:\n\n");
    exibirVetor(vet);
}
