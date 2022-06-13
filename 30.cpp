#include <windows.h>
#include <stdio.h>
#include <locale.h>

main()

{

	int i;
	
	printf("TABELA ASCII \n\n");
	
	for (i=0;i<255;i++)
	{
		if (i%10==0)
			printf("\n");
			printf("%d = %c\t",i,i);
	}
}











