#include <stdio.h>

/* Ler o nome de uma pessoa na forma “nome” seguido por “sobrenome” e
escrever na forma “sobrenome” seguido por “nome”. Exemplo:
entrada: “Fulano”, “de Tal”
saída: “de Tal”, “Fulano” */

int main() {
    char nome[20], sobrenome[20];

    printf("Nome:\n");
    scanf("%s", &nome);
    printf("Sobrenome:\n");
    scanf("%s", &sobrenome);
    printf("%s %s", sobrenome, nome);

    return 0;
}