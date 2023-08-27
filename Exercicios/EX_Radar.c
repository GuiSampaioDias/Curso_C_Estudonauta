/*
            Condicional em C
         ex Radar de velocidade
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
    float vel;
    printf("Digite a velocidade do automóvel: ");
    fflush(stdin);
    scanf("%f", &vel);

    if (vel > 80){
        printf("Você foi multado!\n");
    }
    printf("Se beber, não dirija!");
}
