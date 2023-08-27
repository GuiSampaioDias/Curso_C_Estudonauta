/*
    Verificação da data atual em  C
              08/2023
         Curso linguagem C
      modulo 01 - Estudonauta
    pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/
#include <stdio.h>
#include <time.h>

void main() {
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int d = data->tm_mday;
    int m = data->tm_mon + 1;
    int a = data->tm_year + 1900;

    printf("Estamos no dia %i do mes %i do ano %i",d ,m, a);
    }
