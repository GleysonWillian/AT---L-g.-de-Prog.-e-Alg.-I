#include <stdio.h>

int main()
{

    float idade[7];
    float peso[7];
    float soma = 0;
    int i = 0;
    int contador = 0;

    for (i = 0; i < 7; i++)
    {
        printf("Digite a idade da pessoa: ");
        scanf("%f", &idade[i]);

        fflush(stdin);

        printf("Digite o peso da pessoa (em kg): ");
        scanf("%f", &peso[i]);
        printf("\n");
    }

    for (i = 0; i < 7; i++)
    {
        soma = soma + idade[i];
    }

    for (i = 0; i < 7; i++)
    {
        if (peso[i] > 90.0)
        {
            contador++;
        }
    }

    printf("\nQuantidade de pessoas com mais de 90kg e igual a %.0d \n", contador);

    printf("\nMedia das idades e %.2f anos.", soma / 7);

    return 0;
}