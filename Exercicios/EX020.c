/*
Calcular o valor da viagem de acordo com a distância percorrida em C
                 ex 20
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
    float dist, tot;
    printf("======= TABELA DE PREÇOS ========\n");
    printf("Viagens até 200 km\tR$0.50/KM\n");
    printf("A partir de 200 km\tR$0.35/KM\n");
    printf("---------------------------------\n");
    printf("Distância total  da viagem, em KM: ");
    fflush(stdin);
    scanf("%f", &dist);
    if (dist >= 200){
        tot = dist * 0.35;
        printf("Uma viagem de %.1f vai custar R$0.35.\n", dist);
        printf("Valor total: R$%.2f", tot);
    }else{
        tot = dist * 0.50;
        printf("Uma viagem de %.1f vai custar R$0.50\n", dist);
        printf("Valor total: R$%.2f", tot);
    }
}
