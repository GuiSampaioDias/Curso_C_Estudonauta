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
    printf("Organizar os n�meros em ordem crescente!\n\n");
    printf("Primeiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo n�mero: ");
    fflush(stdin);
    scanf("%i", &n2);
    if (n1 < n2 ){
        printf("Os n�meros em ordem s�o %i e %i.", n1, n2);
    }else if (n2 < n1 ){
        printf("Os n�meros em ordem s�o %i e %i.", n2 ,n1);
    }else {
        printf("Ambos os n�meros s�o de mesmo valor!");
    }
}
