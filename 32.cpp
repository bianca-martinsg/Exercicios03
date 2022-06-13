#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

void soma();
void subtracao();
void divisao();
void multiplicacao();

void soma()
{
	float num1, num2, soma;
	printf ("Digite o valor dos dois números a serem somados.\n");
	scanf ("%f%f",&num1, &num2);
	soma = num1 + num2;
	printf ("Soma igual a: %.2f\n", soma);
}

void subtracao()
{
	float num1, num2, subtracao;
	printf ("Digite o valor dos dois números a serem subtraídos.\n");
	scanf ("%f%f",&num1, &num2);
	subtracao = num1 - num2;
	printf ("Subtração igual a: %.2f\n", subtracao);
}

void divisao()
{
	float num1, num2, divisao;
	printf ("Digite o valor dos dois números a serem divididos.\n");
	scanf ("%f%f",&num1, &num2);
	divisao = num1 / num2;
	printf ("Divisão igual a: %.2f\n", divisao);
}

void multiplicacao()
{
	float num1, num2, multiplicacao;
	printf ("Digite o valor dos dois números a serem multiplicados.\n");
	scanf ("%f%f",&num1, &num2);
	multiplicacao = num1 * num2;
	printf ("Multiplicação igual a: %.2f\n", multiplicacao);
}

main ()

	{
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	int digito;
	
	printf("Criar em programa (CALCULADORA)em linguagem C,\n");
	printf("utilizando FUNÇÃO, em que calcule as quatro operações básicas.( + , - , / e * ).\n\n");
	
	printf("Digite a operacao a ser efetuada.\n\n");
	printf(" Soma = 1\n Subtração = 2\n Divisão = 3\n Multiplicação = 4\n\n");
	
	scanf("%d",&digito);
	
	if (digito == 1)
		{
			soma();
		}
	else
		{
			if (digito == 2)
			{
				subtracao();
			}
			else
				{
					if (digito == 3)
					{
						divisao();
					}
					else
						{
							if (digito == 4)
							{
								multiplicacao();
							}
							
						}
				}
		}
		
	getch();

	system ("pause");
}













