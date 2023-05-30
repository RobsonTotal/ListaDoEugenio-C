#include <stdio.h>

/* O custo ao consumidor de um carro novo é dado pelo custo de fábrica
mais os percentuais do distribuidor e dos impostos (aplicados ao custo de
fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos
de 45%, ler o custo de fábrica de um carro e escrever o custo final ao
consumidor. */

int main() {
    float custoFabrica, perDistribuidor, perImpostos, carroNovo;

    printf("Digite o custo de Fabrica do carro:\n");
    scanf("%f", &custoFabrica);

    perDistribuidor = custoFabrica * 0.28;
    perImpostos = custoFabrica * 0.45;
    carroNovo = custoFabrica + perDistribuidor + perImpostos;

    printf("O custo final do carro sera de:\nR$%.2f", carroNovo);

    return 0;
}