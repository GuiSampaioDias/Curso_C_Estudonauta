/*
Achar o maior, inetermediario e o menor de tr�s valores em C
                 ex 27
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
    printf("Colocar os n�meros em ordem!\n\n");
    int n1, n2, n3;
    printf("Primeiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo n�mero: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("Terceiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n3);
    printf("-------------------------\n");
    if (n1 > n2 && n1 > n3){
        printf("MAIOR: %i\n", n1);
    }else if (n2 > n1 && n2 > n3){
        printf("MAIOR: %i\n", n2);
    }else{
        printf("MAIOR: %i\n", n3);
    }
    if ((n1 > n2 && n2 > n3) || (n3 > n2 && n2 > n1) ){
        printf("INTEMEDI�RIO: %i\n", n2);
    }else if ((n2 > n1 && n1 > n3) || (n3 > n1 && n1 > n2)){
        printf("INTERMEDI�RIO: %i\n", n1);
    }else{
        printf("INTERMEDI�RIO: %i\n", n3);
    }
    if (n1 < n2 && n1 < n3){
        printf("MENOR: %i", n1);
    }else if (n2 < n1 && n2 < n3){
        printf("MENOR: %i", n2);
    }else{
        printf("MENOR: %i", n3);
    }
}
