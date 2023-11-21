#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int num[5];
    int i;
    int count = 5;
    int pares = 0, impares = 0;
    int somai = 0;
    int somap = 0;


            for ( i = 0; i < count; i++)
            {
                printf("\n\nDigite os 5 numeros: \n\n");
                scanf("%i", &num[i]);

                if (num[i] % 2 == 0)
                {
                    pares++;
                    
                }   else {

                    impares++;

                }

                somai += num[i];
                somap += num[i];
                


            }
            
            printf("\n\nA soma dos impares é: %i\n\n", somai);
            printf("\n\nA soma dos numeros pares: %i\n\n", somap);
            printf("\n\nOs os numeros digitados são : %i\n\n", num[i]);
            printf("\n\nOs numeros pares são : %i\n\n", pares);
            printf("\n\nOs numeros impares são: %i\n\n", impares);









    return 0;
}