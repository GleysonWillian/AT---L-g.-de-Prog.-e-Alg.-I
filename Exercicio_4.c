#include <stdio.h>

int main()
{
    char nome[15][100];
    float compras[15];
    float bonus;
    int i = 0;

    for (i = 0; i <= 14; i++)
    {
        printf("Digite o nome do cliente: ");
        scanf("%s", &nome[i]);

        fflush(stdin);

        printf("Digite o valor da compra desse cliente: ");
        scanf("%f", &compras[i]);

        printf("\n");
    }

    for (i = 0; i <= 14; i++)
    {
        if (compras[i] < 1000)
        {
            bonus = compras[i] * 0.10;
        }
        else
        {
            bonus = compras[i] * 0.15;
        }

        printf("\nNome do cliente: %s \n", nome[i]);
        printf("Valor das compras: R$ %.2f \n", compras[i]);
        printf("Valor do bonus: R$ %.2f \n", bonus);
    }
    return 0;
}