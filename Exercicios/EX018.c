/*
Verificação do status de alistamento de acordo com o ano que nasceu em C
                 ex 18
                08/2023
           Curso linguagem C
        modulo 03 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/

#include <stdio.h>
#import <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    time_t t;
    time (&t);
    struct tm *data;
    data = localtime(&t);
    int d = data->tm_year + 1900, ida, ano;
    printf("Atualmente estamos no ano de %i.\n",d);
    printf("Em que ano você nasceu: ");
    fflush(stdin);
    scanf("%i", &ano);
    ida = d - ano;
    printf("--------------------------------\n");
    printf("Sua idade atual é %i\n", ida);
    if (ida >= 18){
        printf("Já fez 18 anos. Espero sinceramente que você tenha se alistado.");
    }else{
        printf("Você ainda não tem 18 anos. Não pode se alistar."); }

    }
