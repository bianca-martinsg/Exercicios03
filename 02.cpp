#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float idade,meses,semanas,dias,horas,minutos,segundos;
printf("Conversao de idade\n");
printf("Digite a sua idade\n");
scanf("%f",&idade);
meses=idade*12;
semanas=idade*60;
dias=idade*365;
horas=idade*8760;
minutos=idade*525600;
segundos=idade*31536000;
printf("Sua idade em meses e: %.f\n",meses);
printf("Sua idade em semanas e: %.f\n",semanas);
printf("Sua idade em dias e: %.f\n",dias);
printf("Sua idade em horas e: %.f\n",horas);
printf("Sua idade em minutos e: %.f\n",minutos);
printf("Sua idade em segundos e: %.f\n",segundos);
getch();	
}
