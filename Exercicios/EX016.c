/*
Calcular a % de desconto de acordo com o valor da compra em C
                 ex 16
                08/2023
           Curso linguagem C
        modulo 03 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/

#include <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float valor, desc, tot;
    printf("Qual o valor total das compras: R$ ");
    fflush(stdin);
    scanf("%f", &valor);
    printf("Você comprou R$ %.2f na nossa loja.\n", valor);
    if (valor >= 500 ){
        desc = valor * 10 / 100;
        tot = valor - desc;
        printf("\n============ ATENÇÃO ============\n");
        printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto\n", desc);
        printf("O valor a ser pago é de R$%.2f!\n", tot);
    }
    printf("Volte sempre!\n");
    }
