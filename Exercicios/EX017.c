/*
Calcular a idade de acordo com o ano que nasceu  em C
                 ex 17
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
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int a = data->tm_year +1900;
    int ano, idade;
    printf("Em que ano você nasceu: ");
    fflush(stdin);
    scanf("%i", &ano);
    idade = a - ano;
    printf("Você tem %i anos, certo?\nSeja bem-vindo(a) ao Banco Estudonauta!\n",idade);
    if (idade >= 65){
        printf("=== Atenção! Dirija-se para a fila prferemcial ===\n");
    }

    }
