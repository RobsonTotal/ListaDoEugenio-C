#include <stdio.h>

/* O custo do seguro contra granizo numa comunidade típica de fazendeiros
é 3,5% do valor de cobertura solicitado por acre, multiplicado pelo
número de acres plantados. Supondo que as possibilidades de colheitas
sejam limitadas a trigo, aveia e cevada, ler a cobertura desejada e o
número de acres plantados para cada uma das três plantações e calcular
e escrever o custo total do seguro. */

int main() {
    int totalAcres, acresTrigo, acresAveia, acresCevada;
    float valorPAcre, valorSeguro;

    printf("Insira o valor da cobertura:\n");
    scanf("%f", &valorPAcre);
    printf("Insira a quantidade de acres plantados de trigo, aveia e cevada, respectivamente:\n");
    scanf("%d", &acresTrigo);
    scanf("%d", &acresCevada);
    scanf("%d", &acresAveia);

    totalAcres = acresTrigo + acresAveia + acresCevada;
    valorSeguro = (valorPAcre*0.035)*totalAcres;

    printf("Valor do seguro contra granizo:\nR$%.2f", valorSeguro);

    return 0;
}
