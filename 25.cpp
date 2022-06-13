#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()

	{
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	int numero;
	
	printf("Imprimir os números 0 a 100 com um intervalo de 0.5s\n\n");
	
	for (numero = 0; numero <=100; numero++)
	
	{
		printf ("%d\n",numero);
		Sleep(500);
	}
			
	getch();

	system ("pause");
}

