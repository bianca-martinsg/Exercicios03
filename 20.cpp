#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

main(){
    
    system("cls");
    setlocale(LC_ALL,"");
    
    int valor;
    
    printf("Informe um número qualquer. Esse programa ditará se ele é divisível por 10, por 5 e por 2\n\n");
    scanf("%i", &valor);
    if(valor % 10 == 0)
    {
        printf("%i é divisível por 10, 5 e 2.\n", valor);
    }
    else
    if(valor % 5 == 0)
    {
        printf("%i é divisível por apenas por 5.\n", valor);
    }
    else
    if(valor % 2 == 0)
    {
        printf("%i é divisível por apenas por 2.\n", valor);
    }
    else
    if(valor % 10 != 0 && valor % 5 != 0 && valor % 2 != 0)
    {
        printf("Esse número não é divisível por 10, nem 5, nem 2");
    }
    system("pause");
}







