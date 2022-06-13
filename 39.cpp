#include <stdio.h>
#include <locale.h>
#include<unistd.h>

int main() {
setlocale(LC_ALL, "Portuguese");

	int numero, i=0;

	printf("Olá! Vamos exibir a palavra FATEC!\n");
	printf("Insira quantas vezes você deseja exibir: ");
	scanf("%d", &numero);

   	do{
        		printf("FATEC\n");
       		usleep(1000000);
i++;
}
while(i < numero);
return 0;
	}


