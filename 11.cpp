#include<stdio.h>
#include<conio.h>
main()
{
int horas, velocidademedia;
float distancia,consumo;
printf("Informe o tempo gasto na viagem\n");
scanf("%d",&horas);
printf("Informe a velocidade media do veiculo\n");
scanf("%d",&velocidademedia);
distancia=horas*velocidademedia;
consumo=distancia/12;
printf("Foram gastos %4.2f de combustivel",consumo);
getch();	
}
