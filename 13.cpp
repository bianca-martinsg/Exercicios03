#include <stdio.h>
#include <windows.h>
#include <math.h>

main()
{
    
    int numero;
    
    system("cls");
    printf("Informe um numero inteiro qualquer. Esse programa ditara se ele e par ou impar\n");
    scanf("%i", &numero);
    if(numero % 2 == 0)
    {
        printf("O numero %i e par.\n",numero);
    }
    else
    if(numero % 2 == 1)
    {
        printf("O numero %i e impar.\n", numero);
    }
    system("pause");
}

