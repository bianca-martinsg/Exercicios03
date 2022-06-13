#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>


main(){
    
    system("cls");
    setlocale(LC_ALL,"");
    
    int lado1, lado2, lado3;
    
    printf("Olá Luiz! Esse programa te ajudará a descobrir se os valores digitados podem ser lados de um triângulo\n");
    printf("Informe os valores dos três lados.\n\n");
    scanf("%i%i%i", &lado1,&lado2,&lado3);
    if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2)
    {
        printf("Esses valores podem ser lados de um triângulo.\n");
    }
    else
    printf("Esses valores não podem ser lados de um triângulo.\n");
    system("pause");
}








