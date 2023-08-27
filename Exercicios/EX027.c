/*
Achar o maior, inetermediario e o menor de três valores em C
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
    printf("Colocar os números em ordem!\n\n");
    int n1, n2, n3;
    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("Terceiro número: ");
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
        printf("INTEMEDIÁRIO: %i\n", n2);
    }else if ((n2 > n1 && n1 > n3) || (n3 > n1 && n1 > n2)){
        printf("INTERMEDIÁRIO: %i\n", n1);
    }else{
        printf("INTERMEDIÁRIO: %i\n", n3);
    }
    if (n1 < n2 && n1 < n3){
        printf("MENOR: %i", n1);
    }else if (n2 < n1 && n2 < n3){
        printf("MENOR: %i", n2);
    }else{
        printf("MENOR: %i", n3);
    }
}
