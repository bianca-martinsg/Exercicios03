#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

main(){
    
    system("cls");
    setlocale(LC_ALL,""); 
    
    float preco_compra, preco_venda;
    
    printf("Olá, esse programa o auxiliará a definir o preço de venda de seus produtos!\n");
    printf("Por favor, informe o valor pago para comprar o produto.\n\n");
    scanf("%f", &preco_compra);
    if(preco_compra < 20)
    {
        preco_venda = preco_compra + (preco_compra * 0.45);
        printf("O valor de venda do produto será de %.2f\n\n", preco_venda);
    }
    else
    if(preco_compra >= 20)
    {
        preco_venda = preco_compra + (preco_compra * 0.30);
        printf("O valor de venda do produto será de %.2f\n\n", preco_venda);
    }
    system("pause");
}







