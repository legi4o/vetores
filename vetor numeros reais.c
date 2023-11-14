#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    float numerosreais[10];
    int qtdnegativo = 0;
    float soma = 0;
    int i;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 10; i++)
    {
        printf(" Digite o %dº numero real: ", i + 1);
        scanf("%f", &numerosreais[i]);

        if (numerosreais[i] < 0)
        {
            qtdnegativo++;
        }
        else
        {
            soma += numerosreais[i];
        }
    }

    printf(" \n\n");

    printf("quantidade de negativos: %d", qtdnegativo);
    printf("\nsoma dos positivos: %.2f", soma);

    return 0;
}