/*
  Calcula os valores de deslocamento em C
                 ex 14
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
    printf("Digite um n�mero: ");
    scanf("%i", &n1);
    printf("Digite o deslocamento: ");
    scanf("%i", &n2);
    printf("------ OPERA��ES SHIFT ------\n");
    printf("Calculando %i >> %i � igual a  %i\n", n1, n2, n1 >> n2);
    printf("Calculando %i << %i � igual a %i\n", n1, n2, n1 << n2);
}
