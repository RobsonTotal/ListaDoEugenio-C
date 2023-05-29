#include <stdio.h>

/* Ler o número de eleitores de um município e o número de votos brancos,
nulos e válidos. Em seguida, calcular e escrever o percentual que cada
tipo de voto representa em relação ao total de eleitores. */

int main() {
    int eleitores, brancos, nulos, validos;
    float perBrancos, perNulos, perValidos;

    printf("Insira o número total de eleitores e, em seguida, a quantidade de cada voto:\nTotal de eleitores:");
    scanf("%d", &eleitores);
    printf("Votos brancos: ");
    scanf("%d", &brancos);
    printf("Votos nulos: ");
    scanf("%d", &nulos);
    printf("Votos validos: ");
    scanf("%d", &validos);

    perBrancos = ((float)brancos/eleitores)*100;
    perNulos = ((float)nulos/eleitores)*100;
    perValidos = ((float)validos/eleitores)*100;

    printf("\nPercentual de votos:\nBrancos: %.1f\nNulos: %.1f\nValidos: %.1f", perBrancos, perNulos, perValidos);

    return 0;
}