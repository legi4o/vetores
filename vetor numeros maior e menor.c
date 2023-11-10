#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int i;
    int numero[5];
    int maior = 0;
    int menor = 9999;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 5; i++)
    {
        printf(" Digite o %dº numero: ", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] < menor)
        {
            menor = numero[i];
        }

        if (numero[i] > maior)

        {
            maior = numero[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf(" %dº numero: %d \n", i + 1, numero[i]);
    }

    printf(" maior: %d \n", maior);
    printf(" menor: %d \n", menor);

    return 0;
}