#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()

	{
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	int numero_tabuada, numero_entrada, multiplicacao;
	
	printf("Criar um programa em linguagem C que imprima uma tabuada do 1 a 10 conforme entrada do usuário, \n");
	printf("com o intervalo de 0,5 segundos utilizando o comando FOR\n\n");
	
	printf("Insira um número de entrada para efetuar as multiplicações.\n\n");
	scanf ("%d",&numero_entrada);
	
	for (numero_tabuada = 1; numero_tabuada <=10; numero_tabuada++)
	
	{	
		multiplicacao = numero_tabuada * numero_entrada;
		printf ("%d x %d = %d\n",numero_tabuada, numero_entrada, multiplicacao);
		Sleep(500);
	}	
	getch();

	system ("pause");
}

