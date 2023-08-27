/*
      Calculando em Bitwise em C
                 ex 13
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
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);
    printf("------ OPERAÇÕES BITWISE ------\n");
    printf("Calculando %i & %i é igual a %i\n", n1, n2, n1&n2);
    printf("Calculando %i | %i é igual a %i\n", n1 ,n2,n1|n2);
    printf("Calculando %i ^ %i é igual a %i\n", n1, n2, n1^n2);
}
