#include <stdio.h>
#include <math.h>

/* Ler um valor R correspondente ao raio de uma esfera, calcular e
escrever o seu volume e a sua área. */

int main() {
    float raio;
    double volume, area;
    const float pi = 3.14;

    printf("Insira o valor do raio da esfera:\n");
    scanf("%f", &raio);

    volume = 4/3*pi*raio;
    area = 4*pi*pow(raio, 2);

    printf("Volume: %.2lf\nArea: %.2lf", volume, area);

    return 0;
}