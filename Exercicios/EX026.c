/*
    Condição composta de else if em C
                 ex 26
                08/2023
           Curso linguagem C
        modulo 03 - Estudonauta
         pof: Gustavo Guanabara

Autor: Guilherme Sampaio Dias (GuiSampaioDias)
*/

#include <stdio.h>
#import <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char estado[5];
    printf("Em que estado do Brasil você nasceu: ");
    scanf("%s", estado);
    printf("Nascido em %s você é ", estado);
    if (strcmp(estado,"SP")==0){
        printf("Paulista!");
    }else if (strcmp(estado, "RJ")==0){
        printf("Carioca!");
    }else if (strcmp(estado, "MG")==0){
        printf("Mineiro!");
    }else if (strcmp(estado, "RS")==0){
        printf("Gaúcho!");
    }else if (strcmp(estado, "BH")==0){
        printf("Baiano!");
    }else if (strcmp(estado, "PR")){
        printf("Paranaense");
    }else{
        printf("natural da sua cidade, mas ainda não sei como te chamar!");
    }
}
