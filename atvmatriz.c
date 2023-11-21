#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int numeros[2][2];
    int i, j;

    printf("\n\nDigite os elementos para matriz.\n\n");

        for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n\nElemento da linha %d coluna %d: \n\n", i + 1, j + 1);
            scanf("%d", &numeros[i][j]);
        }
    }

    printf("\n\n Exibindo os elementos para matriz: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Elemento da linha %d coluna %d: %d \n\n", i + 1, j + 1, numeros[i][j]);
        }
    }

    return 0;
}