#include <stdio.h>
#include <windows.h>
#include <math.h>

main(){
    
    int numero;
    
    system("cls");
    printf("Insira um numero inteiro qualquer.\n");
    scanf("%i", &numero);
    if(numero != 0)
    {
        if(numero > 0)
            {
                printf("Esse numero eh positivo.\n");
            }
        else
        if(numero < 0)
            {
                printf("Esse numero eh negativo.\n");
            }
    }
    else
    printf("Esse numero eh zero.\n");
    system("pause");
}


