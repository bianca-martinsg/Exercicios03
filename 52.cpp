#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
 int x, y=0, vet[10],vet1[10];
 for(x=0;x<=9;x++)
 {
 vet[x]=y+2;
 y=y+2;
 }
 for(x=0;x<=9;x++)
 printf("\t %d ",vet[x]);
 for(x=0;x<=9;x++)
 {
 vet1[x]=x+10; 
 }
 for(x=0;x<=9;x++)
 printf("\t %d ",vet1[x]);
 for(x=0;x<=9;x++)
 printf("\t %d ",vet[x]+vet1[x]);
 printf("\n\n");
 system("pause");
 return(0);
}

