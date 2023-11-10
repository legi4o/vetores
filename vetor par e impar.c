#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int pares = 0;
    int impares =0;
    int i;
    int numeros[6];

    for (i = 0; i < 6; i++)
    {
        printf(" Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    // mostrando os numeros//

    for (i = 0; i < 6; i++)
    {
        printf("%d numero: %d \n", i + 1, numeros[i]);
    }

    printf(" pares: %d", pares);
    printf(" impares: %d", impares);

    return 0;
}