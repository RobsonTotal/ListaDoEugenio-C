#include <stdio.h>
#include <math.h>

/* Ler os valores S1, S2 e S3 correspondentes aos comprimentos dos três
lados de um triângulo, calcular e escrever a sua área.
A área do triângulo é dada por:
Área = √T(T − S1)(T − S2)(T − S3)

Onde: T = S1 + S2 + S3
               2 */

int main() {
    int s1, s2, s3;
    float t;
    double area;

    printf("Insira 3 equivalentes aos comprimentos dos lados do triangulo:\n");
    scanf("%d %d %d", &s1, &s2, &s3);

    t = (float)(s1 + s2 + s3)/2;
    //Função "sqrt()" retorna a raiz quadrada do dado valor. Biblioteca math.h
    area = sqrt(2*(t - s1)*(t - s2)*(t - s3));

    printf("A area do triangulo equivale a: %.2lf", area);

    return 0;
}