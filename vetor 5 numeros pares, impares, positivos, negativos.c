#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    int numeros[5];
    int qtdpar = 0;
    int qtdimpar = 0;
    int qtdtotal = 0;
    int maior = 0;
    int menor = 9999;
    int somapar = 0;
    int somaimpar = 0;
    int somatotal = 0;
    int qtdpositivo = 0;
    int qtdnegativo = 0;
    int i;
    float mediapar;
    float mediaimpar;
    float mediatotal;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 5; i++)
    {
        printf(" Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        qtdtotal++;
        somatotal += numeros[i];

        if (numeros[i] % 2 == 0)
        {
            somapar += numeros[i];
            qtdpar++;
        }
        else
        {

            somaimpar += numeros[i];
            qtdimpar++;
        }

        if (numeros[i] < 0)
        {
            qtdnegativo++;
        }
        else
        {
            qtdpositivo++;
        }

        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }

        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    mediaimpar = somaimpar / qtdimpar;
    mediapar = somapar / qtdpar;
    mediatotal = somatotal / qtdtotal;

    // mostrando //

    printf(" \n");
    printf(" quantidade par: %d \n", qtdpar);
    printf(" \n");
    printf(" quantidade impar: %d \n", qtdimpar);
    printf(" \n");
    printf(" quantidade total: %d \n", qtdtotal);
    printf(" \n");
    printf(" soma par: %d \n", somapar);
    printf(" \n");
    printf(" soma impar: %d \n", somaimpar);
    printf(" \n");
    printf(" soma total: %d \n", somatotal);
    printf(" \n");
    printf(" media par: %.2f \n", mediapar);
    printf(" \n");
    printf(" media impar: %.2f \n", mediaimpar);
    printf(" \n");
    printf(" media total: %.2f \n", mediatotal);
    printf(" \n");

    for (i = 4; i >= 0; i--)
    {
        printf(" %dº número: %d \n", i + 1, numeros[i]);
    }

    return 0;
}