/*
Possibilidade de ir ao cinema com a verificação de horário e valor em C
                 ex 22
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
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int h = data ->tm_hour, money;
    setlocale(LC_ALL, "Portuguese");
    printf("============== CINEMA ESTUDONAUTA =============\n");
    printf("HORÁRIO DO FILME: 19H - PREÇO DO INGEESSO: R$20\n");
    printf("-----------------------------------------------\n");
    printf("Quanto dinheiro você tem: R$");
    fflush(stdin);
    scanf("%i", &money);
    printf("Agora são %i horas.\n", h);
    if (h < 19 && money >= 20){
        printf("Você consegue comprar o ingresso!");
    }else{
        printf("Infelizmente não é possível comprar o ingresso!");
        }
}
