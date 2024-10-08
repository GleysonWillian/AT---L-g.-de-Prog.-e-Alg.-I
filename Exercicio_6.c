#include <stdio.h>

int main()
{
    float peso[7];
    int i = 0;

    for (i = 0; i < 7; i++)
    {
        printf("Digite o peso da pessoa: ");
        scanf("%f", &peso[i]);
    }

    for (i = 0; i < 7; i++)
    {
        for (peso[i] > 90)
        {
            printf("\nQuantidade de pessoas com mais de 90kg %.2f", peso[i]);
        }
    }

    return 0;
}