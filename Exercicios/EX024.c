/*
Colocando dois valores em ordem crescente em C
                 ex 24
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
    int n1, n2;
    printf("Organizar os números em ordem crescente!\n\n");
    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%i", &n2);
    if (n1 < n2 ){
        printf("Os números em ordem são %i e %i.", n1, n2);
    }else if (n2 < n1 ){
        printf("Os números em ordem são %i e %i.", n2 ,n1);
    }else {
        printf("Ambos os números são de mesmo valor!");
    }
}
