#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include <windows.h>

main()
{
	system ("cls");
	char a='z' ;
	while(a>='a')
	{
		printf("%c\n", a);
		Sleep(100);
		a--;
	}
	getch();
}

