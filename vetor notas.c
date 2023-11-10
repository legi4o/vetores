#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int numeros[3];
    int i;
    int soma;
    float media;

    for (i = 0; i < 3; i++)
    {
        printf(" Digite a %dº nota: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    for (i = 0; i < 3; i++)
    {
        printf(" %dº nota: %d \n", i + 1, numeros[i]);
    }

    media = soma / 3;


    printf(" media: %.1f", media);

    return 0;
}
