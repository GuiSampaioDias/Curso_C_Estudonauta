/*
Calcular os valores dos produtos em diferentes �pocas do ano em C
                 ex 30
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
    printf("C�lculo de pre�o por �poca do ano.\n");
    float preco;
    int op;
    printf("Digite o pre�o do produto R$");
    fflush(stdin);
    scanf("%f", &preco);
    printf("\n\t   ESCOLHA UM PER�ODO\n\t========================\n");
    printf("\t1\tCarnaval [+10]\n\t2\tF�rias Escolares [+20]\n\t3\tDia das Crian�as [+5]\n");
    printf("\t4\tBlack Friday [-30]\n\t5\tNatal [-5]\n");
    printf("\t========================\n\tDigite sua op��o => ");
    fflush(stdin);
    scanf("%i", &op);
    printf("\n----------------------------------------------------\n");
    switch(op){
        case 1:
            printf("Na �poca de Carnaval, o pre�o do produto vai para R$%.2f", preco + (preco * 10 / 100));
            break;
        case 2:
            printf("Na �poca de F�rias Escolares, o pre�o do produto vai para R$%.2f", preco + (preco * 20 / 100));
            break;
        case 3:
            printf("Na �poca do Dia das Cria�as, o pre�o do produto vai para R$%.2f", preco + (preco * 5 / 100));
            break;
        case 4:
            printf("Na �poca do Black Friday, o pre�o do produto vai para R$%.2f", preco - (preco * 30 / 100));
            break;
        case 5:
            printf("Na �poca de Natal, o pre�o do produto vai para R$%.2f", preco - (preco * 5 / 100));
            break;
        default:
            printf("Per�odo inv�lido!");
    }
    printf("\n----------------------------------------------------\nVOLTE SEMPRE!");
}
