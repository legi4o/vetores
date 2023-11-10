#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int numeros[10];
    int i;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 10; i++)
    {
        printf(" Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %dº numero: %d \n", i + 1, numeros[i]);
    }

    return 0;
}