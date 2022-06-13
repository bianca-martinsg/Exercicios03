#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float m,km,hm,dam,dc,cm,mm;
printf("Conversao\n");
printf("Digite o valor em km\n");
scanf("%f",&km);
m=km*1000;
hm=km*10;
dam=km*100;
dc=km*10000;
cm=km*100000;
mm=km*1000000;
printf("O valor em m e: %.f\n",m);
printf("O valor em hm e: %.f\n",hm);
printf("O valor em dam e: %.f\n",dam);
printf("O valor em dc e: %.f\n",dc);
printf("O valor em cm e: %.f\n",cm);
printf("O valor em mm e: %.f\n",mm);
getch();	
}
