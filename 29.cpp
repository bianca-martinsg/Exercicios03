#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main ()

	{
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	int numero, numero2;
	
	printf("Criar um programa em linguagem C que imprima dois números com o início de 0 e 10 e finalize 10 e 0,\n");
	printf("todos os dois ao mesmo tempo, com o intervalo de 0,5 segundos utilizando FOR DUPLO\n\n");
	
	for (numero = 0, numero2 = 10; numero <=10, numero2 >=0; numero++, numero2--)
	
	{
		printf ("%d  %d\n",numero, numero2);
		Sleep(500);
	}
			
	getch();

	system ("pause");
}



