#include<stdio.h>
#include<conio.h>
#include <windows.h>

main()
{

	system ("cls");
	int linha, coluna;
	printf("\n");
	linha = 1;
	while(linha <8)
	{
		printf("\t");
		coluna = 1;
		while(coluna < linha)
		{
			printf("*");
			coluna +=1;
		}
		printf("\n");
		linha +=1;
	}
}

