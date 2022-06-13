#include <stdio.h>
#include <windows.h>
#include <math.h>

main(){
    
    float valor1, valor2;
    
    system("cls");
    printf("Digite dois numeros quaisquer. Esse programa os organizara em ordem decrescente\n\n");
    scanf("%f%f",&valor1, &valor2);
    if(valor1 > valor2)
        {
            printf("\nOrdem decrescente: %2.f %2.f\n\n",valor1,valor2);
        }
    else
    if(valor2 > valor1)
        {
            printf("\nOrdem decrescente: %2.f %2.f\n\n",valor2,valor1);
        }
    else
    if(valor1 = valor2)
        {    
            printf("Os valores sao iguais\n\n");
            printf("%2.f %2.f\n\n",valor2,valor1);    
        }
    system("pause");
}

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

main(){
    
    system("cls");
    setlocale(LC_ALL,"");
    int valor1, valor2, valor3;
    printf("Digite três números quaisquer. Esse programa os organizará em ordem decrescente.\n");
    scanf("%i%i%i",&valor1,&valor2,&valor3);
    if(valor1 >= valor2)
    {
        if(valor1 >= valor3)
        {
            if(valor2 >= valor3)
            {
                printf("\nA ordem dos valores será de:\n%i %i %i\n\n",valor1,valor2,valor3);
            }
            else
            if(valor3 >= valor2)
            {
                printf("\nA ordem dos valores será de:\n%i %i %i\n\n",valor1, valor3, valor2);
            }
        }
        else
        if(valor3 >= valor1)
        {
            printf("\nA ordem dos valores será de:\n%i %i %i\n\n",valor3,valor1,valor2);
        }
    }
    else
    if(valor2 >= valor1)
    {
        if(valor2 >= valor3)
        {
            if(valor1 >= valor3)
            {
                printf("\nA ordem dos valores será de:\n%i %i %i\n\n",valor2,valor1,valor3);
            }
            else
            if(valor3 >= valor1)
            {
                printf("\nA ordem dos valores será de:\n%i %i %i\n\n",valor2, valor3, valor1);
            }
        }
        else
        if(valor3 >= valor2)
        {
            printf("\nA ordem dos valores será de:\n%i %i %i\n\n",valor3,valor2,valor1);
        }
    }
    system("pause");
}

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

main(){
    
    system("cls");
    setlocale(LC_ALL,"");
    int valor1, valor2, valor3, valor4;
    printf("Digite três números quaisquer. Esse programa os organizará em ordem decrescente.\n");
    scanf("%i%i%i%i",&valor1,&valor2,&valor3,&valor4);
    if(valor1 >= valor2)
    {
        if(valor1 >= valor3)
        {
            if(valor1 >= valor4)
            {
                if(valor2 >= valor3)
                {
                    if(valor2 >= valor4)
                    {
                        if(valor3 >= valor4)
                        {
                            printf("A ordem será de: %i %i %i %i\n\n",valor1,valor2,valor3,valor4);
                            //valor1,valor2,valor3,valor4
                        }
                        else
                        if(valor4 >= valor3)
                        {
                            printf("A ordem será de: %i %i %i %i\n\n",valor1,valor2,valor4,valor3);
                            //valor1,valor2,valor4,valor3
                        }
                    }
                    else
                    if(valor4 >= valor2)
                    {
                        printf("A ordem será de: %i %i %i %i\n\n",valor1,valor4,valor2,valor3);
                        //valor1,valor4,valor2,valor3
                    }
                }
                else
                if(valor3 >= valor2)
                {
                    if(valor3 >= valor4)
                    {
                        if(valor2 >= valor4)
                        {
                            printf("A ordem será de: %i %i %i %i\n\n",valor1,valor3,valor2,valor4);
                            //valor1,valor3,valor2,valor4
                        }
                        else
                        if(valor4 >= valor2)
                        {
                            printf("A ordem será de: %i %i %i %i\n\n",valor1,valor3,valor4,valor2);
                            //valor1,valor3,valor4,valor2
                        }
                    }
                    else
                    if(valor4 >= valor3)
                    {
                        printf("A ordem será de: %i %i %i %i\n\n",valor1,valor4,valor3,valor2);
                        //valor1,valor4,valor3,valor2
                    }    
                }
            }
            else
            if(valor4 >= valor1)
            {
                if(valor2 >= valor3)
                {
                    printf("A ordem será de: %i %i %i %i\n\n",valor4,valor1,valor2,valor3);
                    //valor4,valor1,valor2,valor3
                }
                else
                if(valor3 >= valor2)
                {
                    printf("A ordem será de: %i %i %i %i\n\n",valor4,valor1,valor3,valor2);
                    //valor4,valor1,valor3,valor2
                }
            }
        }
        else
        if(valor3 >= valor1)
        {
            if(valor3 >= valor4)
            {
                if(valor1 >= valor4)
                {
                    if(valor2 >= valor4)
                    {
                        printf("A ordem será de: %i %i %i %i\n\n",valor3,valor1,valor2,valor4);
                        //valor3,valor1,valor2,valor4
                    }
                    else
                    if(valor4 >= valor2)
                    {
                        printf("A ordem será de: %i %i %i %i\n\n",valor3,valor1,valor4,valor2);
                        //valor3,valor1,valor4,valor2
                    }
                }
                else
                if(valor4 >= valor1)
                {
                    printf("A ordem será de: %i %i %i %i\n\n",valor3,valor4,valor1,valor2);
                    //valor3,valor4,valor1,valor2
                }
            }
            else
            if(valor4 >= valor3)
            {
                printf("A ordem será de: %i %i %i %i\n\n",valor4,valor3,valor1,valor2);
                //valor4,valor3,valor1,valor2
            }
        }
    }
    else
    if(valor2 >= valor1)
    {
        if(valor2 >= valor3)
        {
            if(valor2 >= valor4)
            {
                if(valor1 >= valor3)
                {
                    if(valor1 >= valor4)
                    {
                        if(valor3 >= valor4)
                        {
                            printf("A ordem será de: %i %i %i %i\n\n",valor2,valor1,valor3,valor4);
                            //valor2,valor1,valor3,valor4
                        }
                        else
                        if(valor4 >= valor3)
                        {
                            printf("A ordem será de: %i %i %i %i\n\n",valor2,valor1,valor4,valor3);
                            //valor2,valor1,valor4,valor3
                        }
                    }
                    else
                    if(valor4 >= valor1)
                    {
                        printf("A ordem será de: %i %i %i %i\n\n",valor2,valor4,valor1,valor3);
                        //valor2,valor4,valor1,valor3
                    }
                }
                else
                if(valor3 >= valor1)
                {
                    if(valor3 >= valor4)
                    {
                        if(valor1 >= valor4)
                        {
                            printf("A ordem será de: %i %i %i %i\n\n",valor2,valor3,valor1,valor4);
                            //valor2,valor3,valor1,valor4
                        }
                        else
                        if(valor4 >= valor1)
                        {
                            printf("A ordem será de: %i %i %i %i\n\n",valor2,valor3,valor4,valor1);
                            //valor2,valor3,valor4,valor1
                        }
                    }
                    else
                    if(valor4 >= valor3)
                    {
                        printf("A ordem será de: %i %i %i %i\n\n",valor2,valor4,valor3,valor1);
                        //valor2,valor4,valor3,valor1
                    }
                }
            }
            else
            if(valor4 >= valor2)
            {
                if(valor1 >= valor3)
                {
                    printf("A ordem será de: %i %i %i %i\n\n",valor4,valor2,valor1,valor3);
                    //valor4,valor2,valor1,valor3
                }
                else
                if(valor3 >= valor1)
                {
                    printf("A ordem será de: %i %i %i %i\n\n",valor4,valor2,valor3,valor1);
                    //valor4,valor2,valor3,valor1
                }
            }
        }
        else
        if(valor3 >= valor2)
        {
            if(valor3 >= valor4)
            {
                if(valor2 >= valor4)
                {
                    if(valor1 >= valor4)
                    {
                        printf("A ordem será de: %i %i %i %i\n\n",valor3,valor2,valor1,valor4);
                        //valor3,valor2,valor1,valor4
                    }
                    else
                    if(valor4 >= valor1)
                    {
                        printf("A ordem será de: %i %i %i %i\n\n",valor3,valor2,valor4,valor1);
                        //valor3,valor2,valor4,valor1
                    }
                }
                else
                if(valor4 >= valor2)
                {
                    printf("A ordem será de: %i %i %i %i\n\n",valor3,valor4,valor2,valor1);
                    //valor3,valor4,valor2,valor1
                }
            }
            else
            if(valor4 >= valor3)
            {
                printf("A ordem será de: %i %i %i %i\n\n",valor4,valor3,valor2,valor1);
                //valor4,valor3,valor2,valor1
            }
        }
    }
    system("pause");
}




