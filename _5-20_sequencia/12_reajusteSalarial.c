#include <stdio.h>

/* Ler o salário mensal de uma pessoa e o percentual de reajuste, calcular e
escrever o valor do salário reajustado. */

int main() {
    float salarioInicial, reajuste, salarioFinal;

    printf("Insira o valor do salario:\n");
    scanf("%f", &salarioInicial);
    printf("Insira o reajuste percentual do total do salario:\n");
    scanf("%f", &reajuste);

    salarioFinal = salarioInicial*(reajuste*0.01);

    printf("Salario apos o reajuste: R$%.2f", salarioFinal);

    return 0;
}