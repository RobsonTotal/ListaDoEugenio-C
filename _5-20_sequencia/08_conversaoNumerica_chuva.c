#include <stdio.h>

/* Ler uma quantidade de chuva dada em polegadas, calcular e escrever o
valor equivalente em milímetros. Sabe-se que 1 corresponde a 25,4mm. */

int main() {
    int chuvaPol;
    float chuvaMl;

    printf("Insira a quantidade de chuva(em polegadas):\n");
    scanf("%d", &chuvaPol);

    chuvaMl = (float)chuvaPol * 25.4;

    printf("Essa quantidade corresponde a %.1fmm de chuva.", chuvaMl);

    return 0;
}