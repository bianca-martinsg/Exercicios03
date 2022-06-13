#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

main(){
    
    system("cls");
    setlocale(LC_ALL,"");
    
    float a, b, c, delta, x1, x2;
    
    printf("Esse programa calculará uma equação de segundo grau por meio da fórmula de Bháskara\n");
    printf("Digite os valores de a, b e c\n\n");
    start:;
    scanf("%f%f%f", &a,&b,&c);
    delta = ((b*b) - (4*a*c));
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a); 
    if(delta >= 0)
    {
        printf("Os valores de X1 e X2 serão de:\n");
        printf("%.2f %.2f\n", x1, x2);
    }
    else
    if(delta < 0)
    {
        printf("Valor de Delta negativo. Informe outros valores");
        goto start;
    }
    system("pause");
}





