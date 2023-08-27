/*
Possibilidade de ir ao cinema com a verifica��o de hor�rio e valor em C
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
    printf("HOR�RIO DO FILME: 19H - PRE�O DO INGEESSO: R$20\n");
    printf("-----------------------------------------------\n");
    printf("Quanto dinheiro voc� tem: R$");
    fflush(stdin);
    scanf("%i", &money);
    printf("Agora s�o %i horas.\n", h);
    if (h < 19 && money >= 20){
        printf("Voc� consegue comprar o ingresso!");
    }else{
        printf("Infelizmente n�o � poss�vel comprar o ingresso!");
        }
}
