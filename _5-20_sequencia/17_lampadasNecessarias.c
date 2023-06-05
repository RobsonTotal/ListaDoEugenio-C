#include <stdio.h>
#include <math.h>

/* A potência necessária para iluminar adequadamente um cômodo é de 18
W/m^2. Ler a potência de uma lâmpada e as dimensões (largura e comprimento)
do cômodo, calcular e escrever o número de lâmpadas necessárias para a
iluminação. */

int main() {
    int lampadasNecessarias;
    float potenciaLampada, largura, comprimento, potenciaNecessaria;

    printf("Insira a potencia da Lampada em Watts:\n");
    scanf("%f", &potenciaLampada);
    printf("Agora, insira as dimensoes do comodo, em metros(Largura e altura, respectivamente):\n");
    scanf("%f", &largura);
    scanf("%f", &comprimento);

    potenciaNecessaria = (largura*comprimento)*18;
    //Função "ceil()" retorna o teto dos parâmetros. Da biblioteca math.h
    lampadasNecessarias = ceil(potenciaNecessaria/potenciaLampada);

    printf("Lampadas necessarias para iluminar o comodo:\n%d", lampadasNecessarias); 

    return 0;
}