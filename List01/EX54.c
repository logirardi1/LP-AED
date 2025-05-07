#include <stdio.h>

int main() {
    int lados;
    float medida;

    printf("Digite o número de lados (3, 4 ou 5): ");
    scanf("%d", &lados);
    printf("Digite a medida do lado (em cm): ");
    scanf("%f", &medida);

    if (lados == 3)
        printf("TRIÂNGULO - Perímetro: %.2f cm\n", 3 * medida);
    else if (lados == 4)
        printf("QUADRADO - Área: %.2f cm²\n", medida * medida);
    else if (lados == 5)
        printf("PENTÁGONO\n");

    return 0;
}
