#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

main(){
    
    system("cls");
    setlocale(LC_ALL,"");
    
    float numero;
    
    printf("Digite um n�mero qualquer\n\n");
    scanf("%f", &numero);
    if(numero > 20)
    {
        numero = numero/2;
        printf("A metade desse n�mero equivale a: %.2f\n", numero);
        system("pause");
    }
    else
    system("pause");
}






