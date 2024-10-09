#include <stdio.h>

int main()
{
    int qtd = 0;
    int i = 0, j = 0;

    for (i = 0; i < 10; i++)
    { 
        int numero = 0;
        printf("Digite um numero: \n");
        scanf("%d", &numero);
        if (numero <= 1) {
			continue;
		}
		
		for (j = 2; j < numero; j++) {	
			if (numero % j == 0) {
				break;
			}
		}
		
		if (j == numero) {
			qtd++;
		}

    }
    printf("\nQuantidade de numeros primos: %d", qtd);

    return 0;
}