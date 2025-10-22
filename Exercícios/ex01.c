#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choose, qtd;
    float preco, total = 0;
    printf("----------------------\nTabela de preços:\nProduto 1: R$ 4,50\nProduto 2: 5,00\nProduto 3: 7,00\n----------------------\n");
    printf("Você deseja comprar o produto 1? (1-Sim, 0-Não):\n");
    scanf("%d", &choose);
    if(choose==1)
    {
        printf("Insira a quantidade desejada do produto 1:\n");
        scanf("%d", &qtd);
        preco = qtd*4.50;
        total += preco;
    }
    printf("Você deseja comprar o produto 2? (1-Sim, 0-Não):\n");
    scanf("%d", &choose);
    if(choose==1)
    {
        printf("Insira a quantidade desejada do produto 2:\n");
        scanf("%d", &qtd);
        preco = qtd*5.00;
        total += preco;
    }
    printf("Você deseja comprar o produto 3? (1-Sim, 0-Não):\n");
    scanf("%d", &choose);
    if(choose==1)
    {
        printf("Insira a quantidade desejada do produto 3:\n");
        scanf("%d", &qtd);
        preco = qtd*7.00;
        total += preco;
    }
    if(total==0)
    {
        printf("O cliente não selecionou nenhum produto.\n");
    }
    else
    {
        printf("O valor total a ser pago é de: R$ %.2f\n", total);
    }
    return 0;
}