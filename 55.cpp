#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
 int vet1[5], vet2[5], num, cont=0, x;
 printf("\n");
 printf("\nVetor 1");
 for(x=0;x<=4;x++)
 {
 cont=0+x;
 printf("\t[%d] Digite um valor: ",cont);
 scanf("%d",&num);
 vet1[x]=num;
 }
 printf("\n\n");
 printf("\nVetor 2");
 for(x=0;x<=4;x++)
 {
 cont=0+x;
 printf("\t[%d] Digite um valor: ",cont);
 scanf("%d",&num);
 vet2[x]=num;
 }
 printf("\n\n");
 printf("\nVetor 1");
 for(x=0;x<=4;x++)
 printf("\t%d ",vet1[x]);
 printf("\n");
 printf("\nVetor 2");
 for(x=0;x<=4;x++)
 printf("\t%d ",vet2[x]);
 printf("\n\n");
 printf("\n\nSoma:");
 for(x=0;x<=4;x++)
 printf("\t%d ",vet1[x]+vet2[x]);
 printf("\n\n");
 system("pause");
 return(0);
}









	










