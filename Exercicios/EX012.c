/*
Calcular a media e verificar em uma condicional em C
                 ex 12
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
    float nota1, nota2;
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    float med = (nota1 + nota2) / 2;
    printf("A média do aluno foi %.1f\n", med);
    printf("A situação é %s", (med >=7)? "Aprovado!": "Reprovado!");
}
