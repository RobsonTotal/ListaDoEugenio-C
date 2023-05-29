#include <stdio.h>

//Ler um valor inteiro e escrever o seu antecessor e o seu sucessor.

int main() {
    int valor;

    printf("Digite um valor:\n");
    scanf("%d", &valor);
    printf("O antecessor de %d e: %d\nE seu sucessor e: %d", valor, valor-1, valor+1);
    
    return 0;
}