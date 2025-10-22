#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mtd_pag, num_parcelas;
    float preco, val_final;
    printf("Insira o preço total dos produtos desejados:\n");
    scanf("%f", &preco);
    printf("Escolha a forma de pagamento (1-Pix, 2-Crédito, 3-Débito):\n");
    scanf("%d", &mtd_pag);
    if(mtd_pag==1)
    {
        //Pix -> 10% de desconto
        val_final = preco*0.9;
        num_parcelas = 1;
    }
    else
    {
        if(mtd_pag==2)
        {
            //Credito -> 15% de acréscimo
            val_final = preco*1.15;
            num_parcelas = 10;
        }
        else
        {
            if(mtd_pag==3)
            {
                //Débito -> 5% de desconto
                val_final = preco*0.95;
                num_parcelas = 1;
            }
            else
            {
                printf("Método de pagamento inválido.\n");
                return 0;
            }
        }
    }
    printf("Valor final: %.2f\nMétodo de pagamento: %d\nValor de cada parcela: %dX de %.2f\n", val_final, mtd_pag, num_parcelas, val_final/num_parcelas);
    return 0;
}