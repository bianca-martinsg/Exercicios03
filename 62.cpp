#include <stdio.h>
#include <stdlib.h>
main()
{
int Y, *P, X;
Y=0;
P=&Y;
X=*P;
X=4;
(*P)++;
X--;
(*P)+=X;
printf("Y = %d \n", Y);
return 0;
}

