/*
    O dobro e a ter�a parte em C
                 ex 07
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
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    int dobro = n * 2;
    float terca = n / 3;
    printf("Analisando o n�mero %d, seu dobro � %d e sua ter�a parte � %.2f.", n, dobro, terca);
}
