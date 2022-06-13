#include <stdio.h>
#include <stdlib.h>
main()
{
float VET[5]={1.1,2.2,3.3,4.4,5.5};
float *F;
int I;
F = VET;
printf("Contador/valor/valor/endereco/endereco\n");
for(I=0;I<=4;I++)
{
printf("\nI = %d",I);
printf("\nVET[%d] = %.1f",I, VET[I]);
printf("\n*(F + %d) = %.1f",I, *(F+I));
printf("\n&VET[%d] = %.X",I, &VET[I]);
printf("\n(F + %d) = %.X",I, F+I);
printf("\n\n");
}
return 0;
}


