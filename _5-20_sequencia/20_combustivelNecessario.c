#include <stdio.h>
#include <math.h>

/* Uma equipe deseja calcular o número mínimo de litros de combustível,
que deve ser colocado no tanque de um carro de corrida, para que este
possa completar um determinado número de voltas em um circuito, até o
primeiro reabastecimento. Ler o comprimento da pista (em metros), o
número total de voltas a serem percorridas, o número de reabastecimentos
desejados e o consumo do carro (em Km/l). Em seguida, calcular e
escrever o número mínimo de litros necessários para completar as voltas
até o primeiro reabastecimento. Considerar que o número de voltas entre
os reabastecimentos é o mesmo. */

int main() {
    int voltas, reabastecimentosDesejados, combustivelMinimo;
    float comprimentoPista, combustivelConsumido, distanciaMinima;

    printf("Preencha as informacoes abaixo:\nComprimento da pista em metros:\n");
    scanf("%f", &comprimentoPista);
    printf("Total de voltas a serem percorridas:\n");
    scanf("%d", &voltas);
    printf("Reabastecimentos desejados:\n");
    scanf("%d", &reabastecimentosDesejados);
    printf("Consumo de combustivel por km percorrido(em litros):\n");
    scanf("%f", &combustivelConsumido);

    distanciaMinima = (comprimentoPista*voltas)/1000;
    combustivelMinimo = ceil(distanciaMinima/combustivelConsumido);

    printf("O minimo de combustivel(em litros) necessario para dar o minimo de voltas na pista sao %dl", combustivelMinimo);

    return 0;
}