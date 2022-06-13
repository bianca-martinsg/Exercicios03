#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float raioexterno,raiointerno,areaexterna,areainterna,areaferradura,pi=3.14;
printf("Digite o raio externo da ferradura\n");
scanf("%f",&raioexterno);
printf("Digite o raio interno da ferradura\n");
scanf("%f",&raiointerno);
areaexterna=pi*raioexterno*raioexterno/2;
areainterna=pi*raiointerno*raiointerno/2;
areaferradura=areaexterna-areainterna;
printf("A area da ferradura e %.2f\n",areaferradura);
getch();	
}
