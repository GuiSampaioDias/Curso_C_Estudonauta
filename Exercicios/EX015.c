/*
Calcular a media e verificar em uma condicional em C
                 ex 15
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
    float n1, n2, med;
    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    med = (n1 + n2)/2;
    if (med >= 7.0){
        printf("MEUS Parabéns!\n");
    }
    printf("A sua média final foi %.1f", med);

}
