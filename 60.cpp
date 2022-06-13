#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
 int I, J;
 float N[3][3], N2[3][3];
 for(I=0;I<3;I++)
 {
 printf("Entre com o conjunto de numeros: ");
for(J=0;J<3;J++)
{
 scanf("%f",&N[I][J]);
 N2[I][J] = sqrt(N[I][J]);
 }
 }
 printf("\nValores Originais\n");
 for(I=0;I<3;I++)
 {
 for(J=0;J<3;J++)
{
 printf("%.0f ",N[I][J]);
}
 }
 printf("\nExibindo raiz dos numeros digitados\n");
 for(I=0;I<3;I++)
 {
for(J=0;J<3;J++)
{
printf("%.0f\t",N2[I][J]);
 }
 }
 return 0;
}

