#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int vet[10],x, y=0;
for(x=0;x<=9;x++)
{
vet[x]=y+2;
y=y+2;
}
for(x=0;x<=9;x++)
{ 
printf(" %d ",vet[x]);
printf("\n\n");
}
system("pause");
return(0);
}

