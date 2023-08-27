/*
        Operador Switch  em C
                 ex 28
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
    float v1, v2;
    char operador;
    printf("Super Calculadora!\n");
    printf("Valor 1 = ");
    fflush(stdin);
    scanf("%f", &v1);
    printf("Valor 2 = ");
    fflush(stdin);
    scanf("%f", &v2);
    printf("=========================\n");
    printf("+\tAdição\n-\tSubtração\n*\tMultiplicação\n/\tDivisão\n");
    printf("=========================\n");
    printf("Digite a sua opção -> ");
    fflush(stdin);
    scanf("%c", &operador);
    switch(operador){
        case '+':
            printf("O resultado de %.0f + %.0f = %.0f", v1, v2, v1+v2);
            break;
        case '-':
            printf("O resultado de %.0f - %.0f = %.0f", v1, v2, v1-v2);
            break;
        case '*':
            printf("O resultado de %.0f * %.0f = %.0f", v1, v2, v1*v2);
            break;
        case '/':
            if (v2 != 0){
            printf("O resultado de %.0f / %.0f = %.1f", v1, v2, v1/v2);
            }else{
                    printf("Divisão inválida!");
                }
            break;
        default:
            printf("Não foi possivel realizar a operação.");
    }
    printf("\nFim!!");
}
