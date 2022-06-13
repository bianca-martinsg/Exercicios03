#include<stdio.h>
#include<conio.h>
main()
{
float pes,polegadas,jardas,milhas;
printf("Informe a medida em pes\n");
scanf("%f",&pes);
polegadas=pes*12;
jardas=pes/3;
milhas=pes/5280;
printf("%.2f pes= %.2f Polegadas\n",pes,polegadas);
printf("%.2f pes= %.2f Jardas\n",pes,jardas);
printf("%.2f pes= %.2f Milhas\n",pes,milhas);
getchar();	
}
