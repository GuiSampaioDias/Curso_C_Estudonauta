/*
Calcular o inverso e o oposto de um valor em C
                 ex 21
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
    float num, res;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%f", &num);
    if (num > 0){
        res = 1 / num;
        printf("O inverso de %0.f é igual a %.4f", num, res);
    }else{
        res = num * (-1);
        printf("O oposto de %0.f é igual a %.0f", num, res);
    }
}
