/*
      Como formatar um print em C
                 ex 03
                08/2023
           Curso linguagem C
        modulo 01 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/

#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    int idade;
    float peso;
    printf("Qual � o seu nome: ");
    gets(nome);
    printf("Quantos anos voc� tem: ");
    scanf("%d",&idade);
    printf("Qual o seu peso: ");
    scanf("%f",&peso);
    printf("-------<<< PROCESSANDO >>>-------\n");
    printf("Muito prazer, %s. Voc� tem %d anos e  pesa %.2fKG. Correto?", nome, idade, peso);
}
