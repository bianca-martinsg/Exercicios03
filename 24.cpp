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
    
    //Variáveis e Srand
    char nome[41];
    int qntd_jogadas = 0, jogador[qntd_jogadas], computador[qntd_jogadas],numero_jogador, numero_maquina, valor_jogador = 0, valor_maquina = 0, verificador;
    srand(time(NULL));
    
    //Apresentação e regras
    printf("JOGO DE 21\n\n");
    printf("Insira seu nome:");
    scanf("%s", &nome);
    printf("\nAs regras são:\n\n");
    printf("-> Você e o computador possuem um valor, representados pelo seu nome e PC, respectivamente;\n");
    printf("-> Seu objetivo é chegar o mais próximo possível do valor 21, sem passá-lo;\n");
    printf("-> Para isso, você pode escolher em somar ou não um número ao seu valor total, sendo 1 = sim e 2=não;\n");
    printf("-> Ao fazer isso, a máquina também receberá um número que será somado ao valor dela;\n");
    printf("-> Repita isso até 5 vezes ou até sentir que seu valor é o mais próximo de 21;\n");
    printf("-> Depois disso, basta apenas selecionar 'não', e ver o resultado.\n\n");
    printf("Quando quiser começar, pressione Enter\n");
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
        printf("Deseja somar outro número? 1-Sim/2-Não\n");
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
        
        //Possibilidades de vitória do jogador - valor_jogador mais perto de 21
        if(valor_jogador <= 21 && valor_maquina < valor_jogador && qntd_jogadas == 1)
        {
            printf("%s:%i\n", nome, valor_jogador);
            printf("PC:%i\n\n", valor_maquina);
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido por você ficou mais próximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido por você ficou mais próximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido por você ficou mais próximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido por você ficou mais próximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido por você ficou mais próximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido por você ficou mais próximo de 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
        //Possibilidades de vitória do jogador - valor_máquina passou 21
        if(valor_jogador <= 21 && valor_maquina > 21 && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido pela máquina superou 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido pela máquina superou 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido pela máquina superou 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("PARABÉNS!!! Você ganhou!\n");
            printf("O número obtido pela máquina superou 21!\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
        //Possibilidades de vitória da máquina - maquina mais perto de 21
        if(valor_maquina <= 21 && valor_jogador < valor_maquina && qntd_jogadas == 1)
        {
            printf("%s:%i\n", nome, valor_jogador);
            printf("PC:%i\n\n", valor_maquina);
            printf("Que pena... Você perdeu\n");
            printf("O número obtido pela máquina ficou mais próximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("Que pena... Você perdeu\n");
            printf("O número obtido pela máquina ficou mais próximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("Que pena... Você perdeu\n");
            printf("O número obtido pela máquina ficou mais próximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("Que pena... Você perdeu\n");
            printf("O número obtido pela máquina ficou mais próximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("Que pena... Você perdeu\n");
            printf("O número obtido pela máquina ficou mais próximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("Que pena... Você perdeu\n");
            printf("O número obtido pela máquina ficou mais próximo de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
        //Possibilidades de vitória da máquina - valor_jogador passou 21
        if(valor_maquina <= 21 && valor_jogador > 21 && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("Que pena... Você perdeu\n");
            printf("O número obtido por você ultrapassou 21.\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("Que pena... Você perdeu\n");
            printf("O número obtido por você ultrapassou 21.\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("Que pena... Você perdeu\n");
            printf("O número obtido por você ultrapassou 21.\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("Que pena... Você perdeu\n");
            printf("O número obtido por você ultrapassou 21.\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
        //Possibilidades de empate - valor_jogador é igual a valor_máquina
        if(valor_jogador == valor_maquina && qntd_jogadas == 1)
        {
            printf("%s:%i\n", nome, valor_jogador);
            printf("PC:%i\n\n", valor_maquina);
            printf("EMPATE!!!\n");
            printf("O número obtido por você e pela máquina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("O número obtido por você e pela máquina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("O número obtido por você e pela máquina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("O número obtido por você e pela máquina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("O número obtido por você e pela máquina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("O número obtido por você e pela máquina foram iguais\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
        //Possibilidades de empate - valor_jogador e valor_máquina ultrapassaram 21
        if(valor_jogador > 21 && valor_maquina > 21 && qntd_jogadas == 3)
        {
            printf("%s:%i = %i + %i + %i\n", nome, valor_jogador, jogador[0], jogador[1], jogador[2]);
            printf("PC:%i = %i + %i + %i\n\n", valor_maquina, computador[0], computador[1], computador[2]);
            printf("EMPATE!!!\n");
            printf("O número obtido por você e pela máquina foram acima de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("O número obtido por você e pela máquina foram acima de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("O número obtido por você e pela máquina foram acima de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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
            printf("O número obtido por você e pela máquina foram acima de 21\n");
            printf("Deseja jogar novamente? 1-Sim/2-Não\n");
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







