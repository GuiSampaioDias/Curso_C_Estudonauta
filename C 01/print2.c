#import <stdio.h>
void main(){
    unsigned int idade = 37;
    float peso = 92.1;
    char sexo = 'M';
    char *nome = "Josep";

    printf("%s e do sexo %c, tem %i anos e pesa %.1fkg",nome, sexo, idade, peso);
}
