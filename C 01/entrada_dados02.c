#import <stdio.h>
void main(){
    char r;
    char s;
    char n;
    printf("digite so uma letra: ");
    fflush(stdin); //limpar a entrada padrao
    scanf("%c", &r);
    printf("digite uma segunda letra: ");
    fflush(stdin);
    n = getchar(); // getchar() substitui o scanf() para uma letra
    printf("Digite outra letra: ");
    scanf(" %c,", &s); // colocar um espaço na frente do c para limpar a entrada padrao

    printf("Voce digitou as letras \"%c\", \"%c\" e %c ", r, n, s);
}
