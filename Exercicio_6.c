#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sexo[7];
    int idade[7];
    int media_h = 0, media_m = 0;
    int soma_idades = 0, soma_idades_h = 0, soma_idades_m = 0;
    int i = 0;
    int contador_idades_m = 0, contador_idades_h = 0;

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

        if (sexo[i] == 'F')
        {
            soma_idades_m += idade[i];

            contador_idades_m++;
        }
        else if (sexo[i] == 'M')
        {
            soma_idades_h += idade[i];
            contador_idades_h++;
        }
    }

    if (contador_idades_m > 0)
    {
        media_m = soma_idades_m / contador_idades_m;
    }
    if (contador_idades_h > 0)
    {
        media_h = soma_idades_h / contador_idades_h;
    }

    printf("\nA media das idades e de %.2d anos.", soma_idades / 7);
    printf("\nA media da idades das mulheres e  %.2d anos.", media_m);
    printf("\nA media da idades dos homens e  %.2d anos.", media_h);

    return 0;
}