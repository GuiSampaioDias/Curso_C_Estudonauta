/*
Como criar diferentes tipos de variaveis em C
                 ex 04
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
    char nome1[30];
    char sexo1;
    float nota1;
    char nome2[30];
    char sexo2;
    float nota2;
    char nome3[30];
    char sexo3;
    float nota3;
    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    printf("Nome: ");
    gets(nome1);
    printf("Sexo [M/F]: ");
    fflush(stdin);
    sexo1 = getchar();
    printf("Nota: ");
    scanf("%f", &nota1);
    printf("\nCadastro da segunda pessoa:\n");
    printf("---------------------------\n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome2);
    printf("Sexo [M/F]: ");
    fflush(stdin);
    sexo2 = getchar();
    printf("Nota: ");
    scanf("%f", &nota2);
    printf("\nCadastro da terceira pessoa:\n");
    printf("----------------------------\n");
    printf("Nome:");
    fflush(stdin);
    gets(nome3);
    printf("Sexo [M/F]: ");
    fflush(stdin);
    sexo3 = getchar();
    printf("Nota: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa\n");
    printf("------------------------------\n");
    printf("Nome                Sexo  Nota\n");
    printf("%-22s%-5c%-4.1f\n",nome1, sexo1, nota1);
    printf("%-22s%-5c%-4.1f\n", nome2, sexo2, nota2);
    printf("%-22s%-5c%-4.1f\n", nome3,sexo3, nota3);
}
