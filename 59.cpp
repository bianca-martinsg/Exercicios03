#include <stdio.h>
#include <stdlib.h>
main()
{
int i, j, m[3][3];
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
printf("Elemento[%d][%d]= ",i,j);
scanf("%d",&m[i][j]);
}
printf("\n::: Valores Originais ::: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d ",m[i][j]);
printf("\n");
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
m[i][j]=m[i][j]*5;
}
printf("\n::: Valores Multiplicados por 5::: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d ",m[i][j]);
printf("\n");
}
return 0;
}

