#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include <conio.h>
#include<locale.h>

void binario_decimal();
void decimal_binario();

void binario_decimal()
	{

	int bin, dec = 0, i;
    
    	printf("Insira um número binário:\n\n");
    	scanf("%d", &bin);
    
    	for(i = 0; bin > 0; i++)
    	{
        	dec = dec + pow(2, i) * (bin % 10);
        	bin = bin / 10;
    	}
    
    	printf("\n");
    	printf("Número decimal equivalente ao binário: \t %d\n", dec);
    		
	}

void decimal_binario()
	
	{
		
 	int n; // Número de entrada
 	int r; // Resultado do deslocamento
 	int i; // Contador
 
 	printf("Digite o numero: ");
 	scanf("%d", &n);
 
 	for(i = 31; i >= 0; i--) 
		{
		
			r = n >> i;
 		
			if(r & 1) 
			{
				printf("1");
			}
			else 
			{
 	 			printf("0");
			}
 			}
 
	 		printf("\n");
 
 			system("pause");
 		
		}
		
main ()

	{
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	int digito;
	
	printf("Criar em programa em linguagem C, utilizando FUNÇÃO, que converta de BIN/DEC e DEC/BIN.\n");
	
	printf("Digite o número correspondente a conversão que deseja efetuar.\n\n");
	printf(" BIN/DEC = 1\n DEC/BIN = 2\n\n");
	
	scanf("%d",&digito);
	
	if (digito == 1)
		{
			binario_decimal();
		}
		else
			{
				if (digito ==2)
				{
					decimal_binario();
				}
			}
		
	getch();

	system ("pause");
}
	











	


