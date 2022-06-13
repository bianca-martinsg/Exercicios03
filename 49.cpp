#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
char nome[30];
int x,y=0,tam;
printf("\n\n DIGITE UM NOME: ");
gets(nome);
tam=strlen(nome);
printf("\n\t\tO nome digitado e: %s ",nome);
printf("\n\nNa posição [%d] o primeiro caracter digitado e: %c ",y, nome[0]);
printf("\n\nNa posição [%d] o ultimo carácter digitado e: %c ",(y=tam-1));
nome[tam-1]; 
printf("\n\nNa posição [%d] esta o quarto caracter digitado e: %c ",y=3, nome[3]);
printf("\n\n Na posição do primeiro ao terceiro caracter : ");
printf(" ");
for(x=0;x<=2;x++)
{
printf("\n[%d] %c ",x=x+0,nome[x]);
}
printf("\n");
printf("\nNa posicao do primeiro ao ultimo caracter : ");
for(x=0;x<=tam-1;x++)
{
printf("\n[%d] %c ",x=x+0,nome[x]);
printf("\n\n");
}
system("pause");
return(0);} 

