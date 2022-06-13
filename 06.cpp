#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d,x;
printf("Conversao de binario\n");
printf("Digite o numero binario\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
x=(a*8)+(b*4)+(c*2)+(d*1);
printf("O valor decimal e =%d\n",x);
getch();	
}
