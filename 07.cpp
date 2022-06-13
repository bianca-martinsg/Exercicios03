#include<stdio.h>
#include<math.h>
#define pi 3.14159
main()
{
int raio;
float perimetro, area;
printf("Digite o valor do raio\n");
scanf("%d",&raio);
perimetro=2*pi*raio;
area=pi*pow(raio,2);
printf("O perimetro da circunferencia de raio %d = %.2f\n",raio,perimetro);
getchar();	
}
