#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int num;
    int pares, impares;


    printf("Escreva o numero: ");
    if (num % 2 == 0)
    {
        pares++;
    }
    else{

        impares++;

    }
    
    



    return 0;
}