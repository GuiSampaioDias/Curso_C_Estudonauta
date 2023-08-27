/*
Calculando a média das notas do aluno em C
                 ex 09
                08/2023
           Curso linguagem C
        modulo 02 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/

#import <stdio.h>
#import <locale.h>

void main(){
    char nome[20];
    float nota1, nota2;
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    float med = (nota1 + nota2) / 2;
    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f\n", nome, nota1, nota2, med );

}
