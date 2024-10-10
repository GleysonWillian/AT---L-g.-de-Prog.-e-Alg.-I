#include <stdio.h>

int main()
{
    int idade = 1;
    int soma = 0;
    int contador = 0;
    int media = 0;

    while (idade != 0)
    {
        printf("Digite uma idade (ou 0 para encerrar:) ");
        scanf("%d", &idade);

        if (idade > 0)

        {
            soma = soma + idade;
            contador = contador + 1;
        }
    }

    if (contador > 0)
    {
        media = soma / contador;
        printf("\nA media da idades e igual a %d .\n", media);
    }
    else
    {
        printf("\nA idade digitada e invalida.\n");
    }
    return 0;
}