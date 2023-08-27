/*
Verificar se o ano digitado � ou n�o bissexto em C
                 ex 19
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
    int ano;
    printf("Digite um ano qualquer: ");
    fflush(stdin);
    scanf("%i", &ano);
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("O ano %i � Bissexto", ano);
    }else {
    printf("O ano %i n�o � Bissexto", ano);}
}
