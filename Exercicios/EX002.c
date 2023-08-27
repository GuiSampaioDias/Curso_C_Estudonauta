/*
Como fazer o print dos simbulos reservados em C
                 ex 02
                08/2023
           Curso linguagem C
        modulo 01 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/
#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\a\t=\tBeep\n");
    printf("\\n\t=\tNova linha\n");
    printf("\\t\t=\tTabulação\n");
    printf("\\\\\t=\tBarra\n");
    printf("%%%%\t=\tPorcentagem\n");
    printf("\\?\t=\tInterogação\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=");
}
