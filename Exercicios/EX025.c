/*
Verificar a idade em rela��o aos 18 anos em C
                 ex 25
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
    time (&t);
    struct tm *data;
    data = localtime(&t);
    int y = data->tm_year + 1900;
    int ano, idade, tempo;
    printf("Atualmente estamos no ano de %i.\n", y);
    printf("Em que ano voc� nasceu: ");
    fflush(stdin);
    scanf("%i", &ano);
    printf("------------------------------------\n");
    idade = y - ano;
    printf("Sua idade atual � %i anos.\n",idade);
    if (idade == 18 ){
        printf("Voc� completa 18 anos exatamente em %i. V� se alistar.\n", y);
    }else if (idade > 18 ){
        printf("Seu alistamento foi em %i. J� se passaram %i anos.\n", ano + 18, y - (ano + 18));
    }else {
        printf("Seu alistamento ser� em %i. Ainda faltam %i anos.\n", ano + 18, 18 - idade);
    }
    printf("------------------------------------\n\n");
}
