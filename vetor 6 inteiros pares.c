#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int numeros[6];
    int i;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 6; i++)
    {
        printf(" Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 != 0)

        {
            i = i - 1;

            printf(" \n\n");
            printf(" Digite o número novamente: ");
            printf(" \n\n");
        }
    }

    // mostrando

    printf("\n\n");

    for (i = 5; i >= 0; i--)
    {
        printf(" %dº número: %d \n", i + 1, numeros[i]);
    }

    return 0;
}