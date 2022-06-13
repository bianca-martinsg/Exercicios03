#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include <windows.h>

main()
{
	system ("cls");
	char a='a' ;
	while(a<='z')
	{
		printf("%c\n", a);
		Sleep(10);
		a++;
	}
	getch();
}



