#include <stdio.h>
#include <math.h>

/* Uma caixa de azulejos tem material suficiente para cobrir uma área de
1,5 m^2. Ler as dimensões (comprimento, largura e altura) de uma cozinha
retangular, calcular e escrever a quantidade de caixas de azulejos necessárias
para cobrir todas as paredes. Considerar que não será descontada a área
ocupada por portas e janelas. */

int main() {
    int caixasNecessarias;
    float comprimento, largura, altura, dimensoes;

    printf("Insira as dimensoes da cozinha em metros(comprimento, largura e altura, respectivamente):\n");
    scanf("%f",&comprimento);
    scanf("%f",&largura);
    scanf("%f",&altura);

    dimensoes = ((comprimento*altura)*2) + ((largura*altura)*2);
    caixasNecessarias = ceil(dimensoes/1.5);

    printf("A quantidade caixas necessarias para cobrir as paredes e de:\n%d", caixasNecessarias);

    return 0;
}