#import <stdio.h>
#import <stdlib.h>
#import <time.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n = rand()%6;
    int numero;
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");
    printf("Qual o seu palpite: ");
    scanf("%i",&numero);
    printf("Eu pensei no número %d e você pensou no %i", n, numero);
}
