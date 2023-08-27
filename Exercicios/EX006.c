/*
Como como achar o antecessor e o sucessor de um número em C
                 ex 06
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
    int ant = n - 1;
    int suc = n + 1;
    printf("Analisando o número %i, seu antecessor é %i, e seu sucessor é %i.\n", n, ant, suc);
}
