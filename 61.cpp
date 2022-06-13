#include <stdio.h>
#include <stdlib.h>
main()
{
 int M, I, J, N[3][3];
 for(I=0;I<3;I++)
 {
 printf("Entre com o conjunto de numeros: ");
for(J=0;J<3;J++)
{

 scanf("%d",&N[I][J]);
 }
 }
 printf("Entre com o multiplicador: ");
 scanf("%d", &M);

 printf("\nValores Originais\n");
 for(I=0;I<3;I++)
 {
 for(J=0;J<3;J++)
{
 printf("%d ",N[I][J]);
}
 }
 for(I=0;I<3;I++)
 for(J=0;J<3;J++)
 N[I][J]=N[I][J]*M;
 printf("\nValores Multiplicados\n");
 for(I=0;I<3;I++)
 {
for(J=0;J<3;J++)
{
printf("%d ",N[I][J]);
 }
 }
 return 0;
}

