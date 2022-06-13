#include <stdio.h>
#include <windows.h>
#include <math.h>

main(){
    
    int comando,condicao;
    float numero1, numero2,resultado;
    
    start:; 
    system("cls");
    printf("CALCULADORA\n\n");
    printf("Selecione uma das operacoes\n\n");
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");
    printf("5-Fechar programa\n\n");
    scanf("%i", &comando);
    if(comando == 1)
        {
            printf("\nInforme dois valores\n\n");
            scanf("%f%f", &numero1,&numero2);
            resultado = numero1 + numero2;
            printf("O resultado equivale a %f\n\n", resultado);
            Calculo:;
            printf("Realizar outro calculo?\n\n");
            printf("1 => Sim / 2 => Nao\n\n");
            scanf("%i", &comando);
            if(comando == 1)
                {
                    goto start;
                }
            else
            if(comando == 2)
                {
                    printf("Finalizando operacoes...\n\n");
                    goto end;
                }
            else
            if(comando !=1 && comando != 2)
                {
                    system("cls");
                    printf("Resposta invalida\n");
                    goto Calculo;
                }
        }
    else
    if(comando == 2)
        {
            printf("\nInforme dois valores\n\n");
            scanf("%f%f", &numero1,&numero2);
            resultado = numero1 - numero2;
            printf("O resultado equivale a %f\n\n", resultado);
            printf("Realizar outro calculo?\n\n");
            printf("1 => Sim / 2 => Nao\n\n");
            scanf("%i", &comando);
            if(comando == 1)
                {
                    goto start;
                }
            else
            if(comando == 2)
                {
                    printf("Finalizando operacoes...\n\n");
                    goto end;
                }
            else
            if(comando !=1 && comando != 2)
                {
                    system("cls");
                    printf("Resposta invalida\n");
                    goto Calculo;
                }
        }
    else
    if(comando == 3)
        {
            printf("\nInforme dois valores\n\n");
            scanf("%f%f", &numero1,&numero2);
            resultado = numero1 * numero2;
            printf("O resultado equivale a %f\n\n", resultado);
            printf("Realizar outro calculo?\n\n");
            printf("1 => Sim / 2 => Nao\n\n");
            scanf("%i", &comando);
            if(comando == 1)
                {
                    goto start;
                }
            else
            if(comando == 2)
                {
                    printf("Finalizando operacoes...\n\n");
                    goto end;
                }
            else
            if(comando !=1 && comando != 2)
                {
                    system("cls");
                    printf("Resposta invalida\n");
                    goto Calculo;
                }
        }
    else
    if(comando == 4)
        {
            printf("\nInforme dois valores\n\n");
            scanf("%f%f", &numero1,&numero2);
            resultado = numero1 / numero2;
            printf("O resultado equivale a %f\n\n", resultado);
            printf("Realizar outro calculo?\n\n");
            printf("1 => Sim / 2 => Nao\n\n");
            scanf("%i", &comando);
            if(comando == 1)
                {
                    goto start;
                }
            else
            if(comando == 2)
                {
                    printf("Finalizando operacoes...\n\n");
                    goto end;
                }
            else
            if(comando !=1 && comando != 2)
                {
                    system("cls");
                    printf("Resposta invalida\n");
                    goto Calculo;
                }
        }
    else
    if(comando == 5)
        {
            goto end;
        }
    system("pause");
    end:;
}



