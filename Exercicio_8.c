#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade[15];
    float peso[15];
    int i = 0;
    
    int qtdPessoa1a10 = 0;
    float somaPeso1a10 = 0.0;
    float mediaPeso1a10 = 0.0;
    
    int qtdPessoa11a20 = 0;
    float somaPeso11a20 = 0.0;
    float mediaPeso11a20 = 0.0;
    
    int qtdPessoa21a30 = 0;
    float somaPeso21a30 = 0.0;
    float mediaPeso21a30 = 0.0;
    
    int qtdPessoaMaior31 = 0;
    float somaPesoMaior31 = 0.0;
    float mediaPesoMaior31 = 0.0;

    
    for (i = 0; i < 15; i++)
    {
        printf("Digite a idade da pessoa: \n");
        scanf("%d", &idade[i]);
        printf("Digite o peso da pessoa (em kg): \n");
        scanf("%f", &peso[i]);
        printf("\n");
    }
    for (i = 0; i < 15; i++)
    {
        if (idade[i] >= 1 && idade[i] <= 10)
        {
            somaPeso1a10 = somaPeso1a10 + peso[i];
            qtdPessoa1a10++;
        }
        else if (idade[i] >= 11 && idade[i] <= 20)
        {
            somaPeso11a20 = somaPeso11a20 + peso[i];
            qtdPessoa11a20++;
        }
        else if (idade[i] >= 21 && idade[i] <= 30)
        {
            somaPeso21a30 = somaPeso21a30 + peso[i];
            qtdPessoa21a30++;
        }
        else
        {
            somaPesoMaior31 = somaPesoMaior31 + peso[i];
            qtdPessoaMaior31++;
        }
    }

    if (somaPeso1a10 > 0) {
        mediaPeso1a10 = somaPeso1a10 / qtdPessoa1a10;
    }   
    if (somaPeso11a20 > 0) {
        mediaPeso11a20 = somaPeso11a20 / qtdPessoa11a20;
    }
    if (somaPeso21a30 > 0) {
        somaPeso21a30 / qtdPessoa21a30;
    }
    if (somaPesoMaior31 > 0) {
        somaPesoMaior31 / qtdPessoaMaior31;
    }
        printf("\nA media de peso das pessoas com a faixa etaria de 1 a 10 e igual a %.2f .\n", mediaPeso1a10);
        printf("\nA media de peso das pessoas com a faixa etaria de 11 a 20 e igual a %.2f .\n", mediaPeso11a20);
        printf("\nA media de peso das pessoas com a faixa etaria de 21 a 30 e igual a %.2f .\n", mediaPeso21a30);
        printf("\nA media de peso das pessoas com a faixa etaria maior que 31 e igual a %.2f .\n", mediaPesoMaior31);
    return 0;
}