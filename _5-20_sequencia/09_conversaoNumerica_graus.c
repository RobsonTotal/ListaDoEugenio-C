#include <stdio.h>

/* Ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
equivalente em graus Celsius. A conversão é dada por:

                Onde:
°C = °F − 32        oC: temperatura em graus Celsius  
 5      9           oF: temperatura em graus Fahrenheit */

int main() {
    int fahrenheit;
    float celsius;

    printf("Insira uma temperatura em Fahrenheit:\n");
    scanf("%d", &fahrenheit);
    
    celsius = (((float)fahrenheit - 32)/9)*5;

    printf("Que equivale a %.1f graus Celsius.", celsius);

    return 0;
}