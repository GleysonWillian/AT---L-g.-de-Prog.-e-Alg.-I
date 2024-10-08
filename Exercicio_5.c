#include <stdio.h>

int main()
{

    float idade[7];
    float soma = 0;
    int i = 0;

    for (i = 0; i < 7; i++)
    {
        printf("Digite a idade da pessoa: ");
        scanf("%f", &idade[i]);
    }

    for (i = 0; i < 7; i++)
    {
        soma = soma + idade[i];
    }

    printf("\nMedia das idades e %.0f10
    10.", soma / 7);10

    return 0;
}