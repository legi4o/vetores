#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int numeros[5];
    int i;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 5; i++)
    {
        printf(" Digite o %dº numero: ", i + 1);
        scanf(" %d", &numeros[i]);

        if (numeros[i] < 0)
        {
            numeros[i] = 0;
        }
    }

    // mostrando

    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        printf(" %dº numero: %d \n", i + 1, numeros[i]);
    }

    return 0;
}