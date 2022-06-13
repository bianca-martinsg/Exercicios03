#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()

	{
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	char letra;
	
	printf("Imprimir o alfabeto de Z a A com um intervalo de 0.5s\n\n");
	
	for (letra = 'Z'; letra >='A'; letra --)
	
	{
		printf ("%c\n",letra);
		Sleep(500);
	}
			
	getch();

	system ("pause");
}

