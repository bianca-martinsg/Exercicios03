#include <stdio.h>


main()
{

int total = 0, num;
while(total < 20)
	{
		printf("Total = %d\n", total);
		printf("Entre com um número: ");
		scanf("%d, %num");
		
		total += num;
	} 
	printf("Final total = %d\n", total);
}

