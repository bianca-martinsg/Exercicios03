#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()

	{
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	int numero;
	
	printf("Imprimir os números 100 a 0 com um intervalo de 0.5s\n\n");
	
	for (numero = 100; numero >=0; numero--)
	
	{
		printf ("%d\n",numero);
		Sleep(500);
	}
			
	getch();

	system ("pause");
}

