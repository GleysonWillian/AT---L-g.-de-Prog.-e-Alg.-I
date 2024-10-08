#include <stdio.h>

int main()
{
    float idade[10];
    int i, maiores = 0;

    for (i = 0; i <= 9; i++)
    {
        printf("Digite a idade da pessoa: ");
        scanf("%f", &idade[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        if (idade[i] >= 18)
        {

            maiores++;
        }
    }

    printf("\nA quantidade de pessoas com 18 anos ou mais e igual a %d", maiores);

    return 0;
}