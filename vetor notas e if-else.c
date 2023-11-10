#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    float notas[4];
    float media;
    int i;
    float soma;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 4; i++)
    {
        printf("  Digite a %dº nota: ", i + 1);
        scanf(" %f", &notas[i]);
        soma += notas[i];
    }

    printf(" \n\n");

    for (i = 0; i < 4; i++)
    {
        printf(" %dº nota %.1f \n", i + 1, notas[i]);
    }

    media = (float)soma / 4;

    printf("\n");

    if (media >= 7)
    {
        printf(" APROVADO");
    }
    else if (media >= 5)
    {
        printf(" RECUPERAÇÃO");
    }
    else if (media < 5)
    {
        printf(" REPROVADO");
    }

    printf(" \n\n");

    printf(" media: %.1f", media);

    printf(" \n\n");

    return 0;
}