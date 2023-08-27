/*
Calcular os valores dos produtos em diferentes épocas do ano em C
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
    printf("Cálculo de preço por época do ano.\n");
    float preco;
    int op;
    printf("Digite o preço do produto R$");
    fflush(stdin);
    scanf("%f", &preco);
    printf("\n\t   ESCOLHA UM PERÍODO\n\t========================\n");
    printf("\t1\tCarnaval [+10]\n\t2\tFérias Escolares [+20]\n\t3\tDia das Crianças [+5]\n");
    printf("\t4\tBlack Friday [-30]\n\t5\tNatal [-5]\n");
    printf("\t========================\n\tDigite sua opção => ");
    fflush(stdin);
    scanf("%i", &op);
    printf("\n----------------------------------------------------\n");
    switch(op){
        case 1:
            printf("Na época de Carnaval, o preço do produto vai para R$%.2f", preco + (preco * 10 / 100));
            break;
        case 2:
            printf("Na época de Férias Escolares, o preço do produto vai para R$%.2f", preco + (preco * 20 / 100));
            break;
        case 3:
            printf("Na época do Dia das Criaças, o preço do produto vai para R$%.2f", preco + (preco * 5 / 100));
            break;
        case 4:
            printf("Na época do Black Friday, o preço do produto vai para R$%.2f", preco - (preco * 30 / 100));
            break;
        case 5:
            printf("Na época de Natal, o preço do produto vai para R$%.2f", preco - (preco * 5 / 100));
            break;
        default:
            printf("Período inválido!");
    }
    printf("\n----------------------------------------------------\nVOLTE SEMPRE!");
}
