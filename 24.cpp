#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include<time.h>

main(){
    
    game_start:;
    system("cls");
    setlocale(LC_ALL,"");
    
    //Vari�veis e Srand
    char nome[41];
    int qntd_jogadas = 0, jogador[qntd_jogadas], computador[qntd_jogadas],numero_jogador, numero_maquina, valor_jogador = 0, valor_maquina = 0, verificador;
    srand(time(NULL));
    
    //Apresenta��o e regras
    printf("JOGO DE 21\n\n");
    printf("Insira seu nome:");
    scanf("%s", &nome);
    printf("\nAs regras s�o:\n\n");
    printf("-> Voc� e o computador possuem um valor, representados pelo seu nome e PC, respectivamente;\n");
    printf("-> Seu objetivo � chegar o mais pr�ximo poss�vel do valor 21, sem pass�-lo;\n");
    printf("-> Para isso, voc� pode escolher em somar ou n�o um n�mero ao seu valor total, sendo 1 = sim e 2=n�o;\n");
    printf("-> Ao fazer isso, a m�quina tamb�m receber� um n�mero que ser� somado ao valor dela;\n");
    printf("-> Repita isso at� 5 vezes ou at� sentir que seu valor � o mais pr�ximo de 21;\n");
    printf("-> Depois disso, basta apenas selecionar 'n�o', e ver o resultado.\n\n");
    printf("Quando quiser come�ar, pressione Enter\n");
    system("pause");
    
    //Jogo
    verificador = 1;
    loop_21:;
    if(verificador == 1 && valor_jogador < 21 && valor_maquina < 21 && qntd_jogadas <= 6)
    {
        call_out_number:;
        numero_jogador = 0;
        numero_maquina = 0;
        while (numero_jogador == 0)
        {
            numero_jogador = rand()%10;
        }
        
        while(numero_maquina == 0)
        {
            numero_maquina = rand()%10;
        }
        
        for(int i = 0; i <= qntd_jogadas; i++)
        {
            if(numero_jogador == jogador[i])
            {
                goto call_out_number;
            }
        }
        
        valor_jogador = valor_jogador + numero_jogador;
        valor_maquina = valor_maquina + numero_maquina;
        jogador[qntd_jogadas] = numero_jogador;
        computador[qntd_jogadas] = numero_maquina;
        qntd_jogadas = qntd_jogadas + 1;
        
        system("cls");
        printf("JOGO DE 21\n\n");
        printf("%s:%i --- O valor adquirido dessa vez foi %i\n", nome, valor_jogador, numero_jogador);
        printf("PC:X --- O valor adquirido dessa vez foi X\n\n");
        printf("Deseja somar outro n�mero? 1-Sim/2-N�o\n");
        scanf("%i", &verificador);
        goto loop_21;
    }
    else
    //Resultados
    if(verificador == 2 || valor_jogador >= 21 || valor_maquina >= 21 || qntd_jogadas > 6)
    {
        system("cls");
        printf("JOGO DE 21\n\n");
        printf("RESULTADOS\n\n");
        printf("O ganhador foi...\n\n");
        
        //Possibilidades de vit�ria do jogador - valor_jogador mais perto de 21
        if(valor_jogador <= 21 && valor_maquina < valor_jogador && qntd_jogadas == 1)
        {
            printf("%s:%i\n", nome, valor_jogador);
            printf("PC:%i\n\n", valor_maquina);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido por voc� ficou mais pr�ximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador <= 21 && valor_maquina < valor_jogador && qntd_jogadas == 2)
        {
            printf("%s:%i = %i + %i\n", nome, valor_jogador, jogador[0], jogador[1]);
            printf("PC:%i = %i + %i\n\n", valor_maquina, computador[0], computador[1]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido por voc� ficou mais pr�ximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador <= 21 && valor_maquina < valor_jogador && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido por voc� ficou mais pr�ximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador <= 21 && valor_maquina < valor_jogador && qntd_jogadas == 4)
        {
            printf("%s:%i = %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3]);
            printf("PC:%i = %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido por voc� ficou mais pr�ximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador <= 21 && valor_maquina < valor_jogador && qntd_jogadas == 5)
        {
            printf("%s:%i = %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4]);
            printf("PC:%i = %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido por voc� ficou mais pr�ximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador <= 21 && valor_maquina < valor_jogador && qntd_jogadas == 6)
        {
            printf("%s:%i = %i + %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4], jogador[5]);
            printf("PC:%i = %i + %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4], computador[5]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido por voc� ficou mais pr�ximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        //Possibilidades de vit�ria do jogador - valor_m�quina passou 21
        if(valor_jogador <= 21 && valor_maquina > 21 && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido pela m�quina superou 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador <= 21 && valor_maquina > 21 && qntd_jogadas == 4)
        {
            printf("%s:%i = %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3]);
            printf("PC:%i = %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido pela m�quina superou 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador <= 21 && valor_maquina > 21  && qntd_jogadas == 5)
        {
            printf("%s:%i = %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4]);
            printf("PC:%i = %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido pela m�quina superou 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador <= 21 && valor_maquina > 21  && qntd_jogadas == 6)
        {
            printf("%s:%i = %i + %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4], jogador[5]);
            printf("PC:%i = %i + %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4], computador[5]);
            printf("PARAB�NS!!! Voc� ganhou!\n");
            printf("O n�mero obtido pela m�quina superou 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        //Possibilidades de vit�ria da m�quina - maquina mais perto de 21
        if(valor_maquina <= 21 && valor_jogador < valor_maquina && qntd_jogadas == 1)
        {
            printf("%s:%i\n", nome, valor_jogador);
            printf("PC:%i\n\n", valor_maquina);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido pela m�quina ficou mais pr�ximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_maquina <= 21 && valor_jogador < valor_maquina && qntd_jogadas == 2)
        {
            printf("%s:%i = %i + %i\n", nome, valor_jogador, jogador[0], jogador[1]);
            printf("PC:%i = %i + %i\n\n", valor_maquina, computador[0], computador[1]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido pela m�quina ficou mais pr�ximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_maquina <= 21 && valor_jogador < valor_maquina && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido pela m�quina ficou mais pr�ximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_maquina <= 21 && valor_jogador < valor_maquina && qntd_jogadas == 4)
        {
            printf("%s:%i = %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3]);
            printf("PC:%i = %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido pela m�quina ficou mais pr�ximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_maquina <= 21 && valor_jogador < valor_maquina && qntd_jogadas == 5)
        {
            printf("%s:%i = %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4]);
            printf("PC:%i = %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido pela m�quina ficou mais pr�ximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_maquina <= 21 && valor_jogador < valor_maquina && qntd_jogadas == 6)
        {
            printf("%s:%i = %i + %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4], jogador[5]);
            printf("PC:%i = %i + %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4], computador[5]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido pela m�quina ficou mais pr�ximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        //Possibilidades de vit�ria da m�quina - valor_jogador passou 21
        if(valor_maquina <= 21 && valor_jogador > 21 && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido por voc� ultrapassou 21.\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_maquina <= 21 && valor_jogador > 21 && qntd_jogadas == 4)
        {
            printf("%s:%i = %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3]);
            printf("PC:%i = %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido por voc� ultrapassou 21.\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_maquina <= 21 && valor_jogador > 21 && qntd_jogadas == 5)
        {
            printf("%s:%i = %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4]);
            printf("PC:%i = %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido por voc� ultrapassou 21.\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_maquina <= 21 && valor_jogador > 21 && qntd_jogadas == 6)
        {
            printf("%s:%i = %i + %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4], jogador[5]);
            printf("PC:%i = %i + %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4], computador[5]);
            printf("Que pena... Voc� perdeu\n");
            printf("O n�mero obtido por voc� ultrapassou 21.\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        //Possibilidades de empate - valor_jogador � igual a valor_m�quina
        if(valor_jogador == valor_maquina && qntd_jogadas == 1)
        {
            printf("%s:%i\n", nome, valor_jogador);
            printf("PC:%i\n\n", valor_maquina);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador == valor_maquina && qntd_jogadas == 2)
        {
            printf("%s:%i = %i + %i\n", nome, valor_jogador, jogador[0], jogador[1]);
            printf("PC:%i = %i + %i\n\n", valor_maquina, computador[0], computador[1]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador == valor_maquina && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador == valor_maquina && qntd_jogadas == 4)
        {
            printf("%s:%i = %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3]);
            printf("PC:%i = %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador == valor_maquina && qntd_jogadas == 5)
        {
            printf("%s:%i = %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4]);
            printf("PC:%i = %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador == valor_maquina && qntd_jogadas == 6)
        {
            printf("%s:%i = %i + %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4], jogador[5]);
            printf("PC:%i = %i + %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4], computador[5]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        //Possibilidades de empate - valor_jogador e valor_m�quina ultrapassaram 21
        if(valor_jogador > 21 && valor_maquina > 21 && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram acima de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador > 21 && valor_maquina > 21 && qntd_jogadas == 4)
        {
            printf("%s:%i = %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3]);
            printf("PC:%i = %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram acima de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador > 21 && valor_maquina > 21 && qntd_jogadas == 5)
        {
            printf("%s:%i = %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4]);
            printf("PC:%i = %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram acima de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        else
        if(valor_jogador > 21 && valor_maquina > 21 && qntd_jogadas == 6)
        {
            printf("%s:%i = %i + %i + %i + %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2], jogador[3], jogador[4], jogador[5]);
            printf("PC:%i = %i + %i + %i + %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2], computador[3], computador[4], computador[5]);
            printf("EMPATE!!!\n");
            printf("O n�mero obtido por voc� e pela m�quina foram acima de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-N�o\n");
            scanf("%i", &verificador);
            if(verificador == 1)
            {
                goto game_start;
            }
            else
            if(verificador != 1)
            {
                goto game_end;
            }
        }
        
        game_end:;
        system("pause");
    }
}







