/*
       Print notas dos alunos em C
                ex: 01
                08/2023
           Curso linguagem C
        modulo 00 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/
#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Listagem de Alunos\n");
    printf("Nome\t\tnota\n");
    printf("-------------------\n");
    printf("Ana Beatriz\t8.5\n");
    printf("Bianca Martins  9.0\n");
    printf("Cláudia Sá\t5.5\n");
    printf("Giovana Silva   7.5\n");
}
