#include <stdio.h>

int main() {
    int lados;
    float medida;

    printf("Digite o número de lados: ");
    scanf("%d", &lados);

    if (lados < 3) {
        printf("NÃO É UM POLÍGONO\n");
    } else if (lados == 3) {
        printf("Digite a medida do lado (em cm): ");
        scanf("%f", &medida);
        printf("TRIÂNGULO - Perímetro: %.2f cm\n", 3 * medida);
    } else if (lados == 4) {
        printf("Digite a medida do lado (em cm): ");
        scanf("%f", &medida);
        printf("QUADRADO - Área: %.2f cm²\n", medida * medida);
    } else if (lados == 5) {
        printf("PENTÁGONO\n");
    } else {
        printf("POLÍGONO NÃO IDENTIFICADO\n");
    }

    return 0;
}
