#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <time.h>

main(){
    
    system("cls");
    setlocale(LC_ALL,"");
    
    int numero, verificador[6]= {0,0,0,0,0,0}, numeros_sorteados = 0;
    srand(time(NULL));
    
    printf("PROGRAMA MEGA-SENA\n\n");
    printf("Estamos aqui para sortear e informar os ganhadores da Mega-sena dessa semana!\n");
    printf("Os números da vez foram:\n\n");
    
    for(int i=0; i <= 5; i++)
    {
        numeros_sorteados = i;
        prize_draw:;
        numero = rand() % 60;
        if(numero == 0)
        {
            goto prize_draw;
        }
        else
        if(numero != 0)
        {
            for(int j=0; j <= i; j++)
            {
                if(numero == verificador[j])
                {
                    goto prize_draw;
                }
            }
            verificador[i] = numero;
        }
    }
    printf("%i %i %i %i %i %i\n\n", verificador[0], verificador[1], verificador[2], verificador[3], verificador[4], verificador[5]);
    system("pause");
}







