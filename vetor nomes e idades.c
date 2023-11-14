#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    char nome[5][200];
    int idade[5];
    int i;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 5; i++)
    {
        printf(" Digite um nome: ");
        scanf("%s", &nome[i]);

        printf(" Digite sua idade: ");
        scanf("%d", &idade[i]);

        printf(" \n\n");
        fflush(stdin);
    }

    printf(" \n\n");

    // mostrando nomes e idades:

    for (i = 0; i < 5; i++)
    {
        printf(" o nome é: %s \n", nome[i]);
        printf(" a idade é: %d \n", idade[i]);
        printf(" \n\n");
    }

    return 0;
}