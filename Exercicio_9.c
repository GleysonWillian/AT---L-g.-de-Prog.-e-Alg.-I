#include <stdio.h>

int main()
{
    int i = 1;
    int num = 1;
    int fat = 1;

    printf("Digite um valor para num: ");
    scanf("%d", &num);

    for (i = num; i > 1; i--)
    {
        fat = fat * i;
    }

    printf("\nO valor do fatorial de %d e igual a %d \n .", num, fat);

    return 0;
}