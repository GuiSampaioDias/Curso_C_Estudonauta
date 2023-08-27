/*
Achando a letra anterior e a posterior em C
                 ex 08
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
    char letra;
    printf("Digite uma letra: ");
    fflush(stdin);
    letra = getchar();
    char antes = letra - 1;
    char depois = letra + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.",letra, antes, depois);
}
