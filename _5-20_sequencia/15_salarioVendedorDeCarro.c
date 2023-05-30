#include <stdio.h>

/* Uma revendedora de carros usados paga a seus vendedores um salário
fixo por mês, mais uma comissão, também fixa, para cada carro vendido e mais
5% do valor das vendas efetuadas por eles. Ler o número de carros vendidos
por um vendedor, o valor total de suas vendas, o salário fixo e o valor que ele
recebe por carro. Em seguida, calcular e escrever o salário mensal do
vendedor. */

int main() {
    int nCarros;
    float salarioFixo, salarioFinal, comissaoFixa, totalComissaoFixa, comissaoPer, totalVendas;

    printf("Insira seguir:\nQuantidade de carros vendidos:\n");
    scanf("%d", &nCarros);
    printf("Total das vendas:\nR$");
    scanf("%f", &totalVendas);
    printf("Salario fixo:\nR$");
    scanf("%f", &salarioFixo);
    printf("Comissao fixa:\nR$");
    scanf("%f", &comissaoFixa);

    totalComissaoFixa = comissaoFixa * nCarros;
    comissaoPer = totalVendas * 0.05;
    salarioFinal = salarioFixo + totalComissaoFixa + comissaoPer;

    printf("O salário mensal do vendedor é:\nR$%.2f", salarioFinal);

    return 0;
}