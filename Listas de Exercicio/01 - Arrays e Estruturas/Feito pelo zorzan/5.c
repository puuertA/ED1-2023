#include <stdio.h>
#include <string.h>

#define TAMF 2

typedef struct sProduto
{
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} PRODUTO;

int menu()
{
    int op;
    printf("\nEscolha uma das opcoes abaixo:");
    printf("\n1 - Cadastrar produtos");
    printf("\n2 - Exibir produtos cadastrados");
    printf("\n3 - Produto com maior preco");
    printf("\n4 - Produto com maior quantidade");
    printf("\n4 - Sair");
    printf("\n\nOpcao\n\n>>> ");
    scanf("%d", &op);
    return op;
}

void cadastrar_produtos(PRODUTO vet[]);

void exibir_produtos(PRODUTO vet[]);

void exibir_maior_preco(PRODUTO vet[]);

void main()
{
    PRODUTO vetor[TAMF];
    int op;

    do
    {
        op = menu();
        switch(op)
        {
        case 1:
            cadastrar_produtos(vetor);
            break;

        case 2:
            exibir_produtos(vetor);
            break;

        case 3:
            exibir_maior_preco(vetor);
            break;

        case 4:
            break;

        case 5:
            break;

        default:
            printf("\nOpcao invalida!");
        }
    }
    while(op != 5);
}

void exibir_maior_preco(PRODUTO vet[])
{
    int i, maior = 0;

    for(i=1;i<TAMF;i++)
    {
        if(vet[i].preco > preco[maior].preco)
            maior = i;
    }
    printf("\nCodigo: %d, Nome: %s, Qtde: %d, Preco: R$%.2f",vet[maior].codigo, vet[maior].nome, vet[maior].quantidade, vet[maior].preco);
}

void exibir_produtos(PRODUTO vet[])
{
    int i;
    for(i=0;i<TAMF;i++)
    {
        printf("\nCodigo: %d, Nome: %s, Qtde: %d, Preco: R$%.2f",vet[i].codigo, vet[i].nome, vet[i].quantidade, vet[i].preco);
    }
}

void cadastrar_produtos(PRODUTO vet[])
{
    int i;
    for(i=0;i<TAMF;i++){
        printf("\nDigite o codigo: ");
        scanf("%d", &vet[i].codigo);

        fflush(stdin);
        printf("\nDigite o nome: ");
        scanf("%[^\n]", vet[i].nome); // %[^\n] le até a proxima quebra de linha
        fflush(stdin);

        printf("\nDigite a quantidade: ");
        scanf("%d", &vet[i].quantidade);

        printf("\nDigite o preco: ");
        scanf("%f", &vet[i].preco);
    }
}

