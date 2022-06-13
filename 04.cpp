#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,x1,x2,x3,x4;
printf("Conversao de decimal para binario\n");
printf("Digite um numero de 0 a 15\n");
scanf("%d",&a);
x4=(a%2);
x3=(a/2)%2;
x2=(a/2/2)%2;
x1=(a/2/2/2)%2;
printf("O valor em binario ,: %d%d%d%d\n",x1,x2,x3,x4);
getch();	
}
