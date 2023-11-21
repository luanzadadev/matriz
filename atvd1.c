#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    
    char dc[3][200];
    float notas[3][2];
    float media[2];
    float somanotas=0;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("\n\nDigite o nome da diciplina: ");
        gets(dc[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite as notas: ");
            scanf("%f", &notas[i][j]);

            somanotas += notas[i][j];
        }

            media[i] = somanotas / j;

            somanotas=0;
            
        
        

        fflush(stdin);
    }

    if (media[i] >= 7)
            {
                printf("\n\nNome da disciplina: %s \n", dc[i]);
                printf("Nota: %.1f \n\n", notas[i][j]);
                printf("\n\nMédia: %.1f \n\n", media[i]);

                 printf("\n\nAprovado!\n\n");
            }
            else if (media[i] >= 5 && media[i] < 7)

            {
             printf("\n\nNome da disciplina: %s \n", dc[i]);                printf("Nota: %.1f \n\n", notas[i][j]);
            printf("\n\nMédia: %.1f \n\n", media[i]);

             printf("Recuperação.");
            } else{
                printf("\n\nNome da disciplina: %s \n", dc[i]);
                printf("Nota: %.1f \n\n", notas[i][j]);
                printf("\n\nMédia: %.1f \n\n", media[i]);

                printf("Reprovado.");
            }

    printf("\n\nExibindo os dados das diciplinas\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n\nNome da disciplina: %s \n", dc[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Nota: %.1f \n\n", notas[i][j]);
        }
            printf("\n\nMédia: %.1f \n\n", media[i]);
    }

    return 0;
}