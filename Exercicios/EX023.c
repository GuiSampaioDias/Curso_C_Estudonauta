/*
Verificar se o valor � positivo negativo ou nulo em C
                 ex 23
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
    int num;
    printf("Me diga um n�mero e eu te direi se\n ele � POSITIVO, NEGATIVO, NULO\n\n.");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%i", &num);
    if (num > 0){
        printf("O valor %i  � POSITIVO!", num);
    }else if(num < 0){
        printf("O valor %i � NEGATIVO!", num);
    }else{
        printf("O valor 0 �  NULO!");
    }
}
