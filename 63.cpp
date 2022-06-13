# include <stdio.h>
# include <stdlib.h>
int main ( ) {
int * x, * y ;
int a, b ;
a = 27 ;
b = 43 ;
x = &a ;
y = &b ;
printf("Valor: %d - %d \n\n", *x , *y ) ;
*x=*y;
printf("Valor: %d - %d \n\n", *x , *y ) ;
*x = 27 ;
y = x ;
printf ( "Valor: %d - %d \n\n", *x , *y ) ;
system ( "pause") ;
return 0;
} 

