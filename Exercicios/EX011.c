/*
      Condicional no print em C
                 ex 11
                08/2023
           Curso linguagem C
        modulo 02 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/

#import <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    printf("O número que você digitou é %s",(n % 2 == 0)?"Par!":"Ímpar!");
}
