/*
Calculando a % de desconto dos produtos em C
                 ex 10
                08/2023
           Curso linguagem C
        modulo 02 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/

#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char prod[15];
    float pre, desc;
    printf("Produto: ");
    gets(prod);
    printf("Preço de %s: R$", prod);
    scanf("%f", &pre);
    printf("Desconto: (%%) ");
    scanf("%f", &desc);
    float fim = pre - (pre * desc / 100);
    printf("O produto %s custa R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f.\n", prod, pre, desc, fim);
    }
