#include <stdio.h>

/* Um motorista de taxi deseja calcular o rendimento de seu carro na
praça. Sabendo-se que o preço do combustível é de R$2,98 o litro, ler a
marcação do rodômetro no início e no fim do dia, o número de litros de
combustível gasto e o valor recebido dos passageiros. Em seguida,
calcular e escrever a média do consumo em Km/l e o lucro líquido do dia. */

int main() {
    const int COMBUSTIVEL = 2.98;
    float rodometroInicial, rodometroFinal, gasolinaGasta, ganhoPassageiros, mediaGasolina, lucroLiquido;

    printf("Insira a marcacao, em km, do rodometro no incio e no final do dia, respectivamente:\n");
    scanf("%f", &rodometroInicial);
    scanf("%f", &rodometroFinal);
    printf("Insira a quantidade de litros gasto no dia:\n");
    scanf("%f", &gasolinaGasta);
    printf("Agora, insira o ganho total dos passageiros:\n");
    scanf("%f", &ganhoPassageiros);

    mediaGasolina = (rodometroFinal - rodometroInicial)/gasolinaGasta;    
    lucroLiquido =  ganhoPassageiros - (gasolinaGasta*COMBUSTIVEL);

    printf("A gasolina rendeu cerca de %.1fkm/l hoje;\nSeu liquido foi de: R$%.f", mediaGasolina, lucroLiquido);

    return 0;
}