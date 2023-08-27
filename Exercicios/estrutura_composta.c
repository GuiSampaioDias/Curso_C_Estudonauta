/*
        Condicional em  C
             08/2023
        Curso linguagem C
     modulo 01 - Estudonauta
     pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/


#include <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%i", &n);
    if (n % 2 == 0){
        printf("O valor de %i é PAR!\n", n);
    }else{
        printf("O valor de %i é IMPAR!\n",n);

        }
        printf("FIM!!\n")
}
