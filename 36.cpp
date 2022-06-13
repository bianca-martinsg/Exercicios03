#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include <windows.h>

main()
{
	system ("cls");
	int a=0;
	while(a<=100)
	{
		printf("%d\n", a);
		Sleep(10);
		a++;
	}
	getch();
}



