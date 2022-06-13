#include<stdio.h>
#include<conio.h>
#include <windows.h>

main()
{

	system ("cls");
	int b,a;
	printf("Par ou impar\n");
	printf("Digite o numero\n");
	scanf("%d",&a);
	b=a%2;
	switch(b)
	{
		case 1:
			printf("impar");
		break;
		case 0:
			printf("par");
		break;
	}
}

