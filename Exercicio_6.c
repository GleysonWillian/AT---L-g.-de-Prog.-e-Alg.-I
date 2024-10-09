#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo[7];
    int idade[7];
    int soma_idades = 0;
    int soma_idades_h = 0;
    int soma_idades_m = 0;
    int i = 0;
    int contador_idades_m = 0;
    int contador_idades_h = 0;

    for (i = 0; i < 7; i++)
    {
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade[i]);

        fflush(stdin);

        printf("Digite o sexo da pessoa (M para masculino e F para feminino): ");
        scanf("%s", &sexo[i]);

        printf("\n");
    }

    for (i = 0; i < 7; i++)
    {
        soma_idades += idade[i];

        if (sexo[i] == "F")
        {
            soma_idades_m += soma_idades_m;

            contador_idades_m++;
        }
        else if (sexo[i] == "M")
        {
            soma_idades_h += soma_idades_h;
            contador_idades_h++;
        }
    }

    printf("\nA media das idades e de %.2d anos.", soma_idades / 7);
    printf("\nA media da idades das mulheres e  %.2d anos.", contador_idades_m / soma_idades_m);
    printf("\nA media da idades dos homens e  %.2d anos.", contador_idades_h / soma_idades_h);

    return 0;
}