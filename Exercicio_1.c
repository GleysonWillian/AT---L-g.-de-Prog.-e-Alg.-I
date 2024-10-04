#include <stdio.h>

int main()
{
    int numero;
    int contador;
    printf("Tabuada\n\n");
    printf("Insira um numero para o calculo na tabuada: \n");
    scanf("%d", &numero);

    for(contador = 0; contador <= 10; contador++)
    {
        printf("%d x %d = %d \n", numero, contador, numero * contador);
    }
    return 0;
}