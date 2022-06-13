#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>


main(){
    
    system("cls");
    setlocale(LC_ALL,"");
    
    int numero1, numero2, resultado;
    
    printf("Insira dois números inteiros quaisquer. Esse programa os somará.\n\n");
    scanf("%i%i", &numero1, &numero2);
    resultado = numero1 + numero2;
    if(resultado > 10)
    {
        printf("O resultado da soma desses valores equivale a: %i\n\n", resultado);
    }
    else
    if(resultado < 10)
    {
        printf("Não foi possível informar o resultado da soma.\n\n");
    }
    system("pause");
}







