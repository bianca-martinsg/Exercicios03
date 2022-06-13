#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include <windows.h>

main()
{
	system ("cls");
	int a=100;
	while(a>=0)
	{
		printf("%d\n", a);
		Sleep(100);
		a--;
	}
	getch();
}




