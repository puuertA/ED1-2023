/*
1)  Faça um programa para ler um vetor de 12 posições e em seguida ler também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
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
