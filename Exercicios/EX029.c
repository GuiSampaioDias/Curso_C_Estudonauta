/*
Calcular o peso da massa em diferentes planetas em C
                 ex 29
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
    int op;
    float peso;
    printf("Calcular o peso em diversos planetas.\n");
    printf("Seu peso na Terra (Kg) = ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("          ESCOLHA UM PLANETA\n");
    printf("        ======================\n");
    printf("\t1\tMerc�rio\n\t2\tV�nus\n");
    printf("\t3\tMarte\n\t4\tJ�piter\n");
    printf("\t5\tSaturno\n\t6\tUrano\n");
    printf("\t======================\n");
    printf("Digite sua op��o -> ");
    fflush(stdin);
    scanf("%i", &op);
    switch(op){
        case 1:
            printf("No planeta MERC�RIO, seu peso seria %.2f Kg", peso * 0.378);
            break;
        case 2:
            printf("No planeta V�NUS, seu peso seria %.2f Kg", peso * 0.907);
            break;
        case 3:
            printf("No planeta MARTE, seu peso seria %.2f Kg", peso *0.377);
            break;
        case 4:
            printf("No planeta J�PTER, seu peso seria %.2f Kg", peso * 2.364);
            break;
        case 5:
            printf("NO planeta SATURNO, seu peso seria %.2f Kg", peso * 0.916);
            break;
        case 6:
            printf("No planeta Urano, seu peso seria %.2f Kg", peso *0.889);
            break;
        default:
            printf("Seu peso n�o pode ser calculado para outros planetas!");
    }
}
