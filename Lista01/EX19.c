#include <stdio.h>
#include <math.h>

int main() {
    float comp, larg, h;
    float areaParedes, caixas;

    printf("Digite o comprimento da cozinha (em M): ");
    scanf("%f", &comp);

    printf("Digite a largura da cozinha (em M): ");
    scanf("%f", &larg);

    printf("Digite a altura da cozinha (em M): ");
    scanf("%f", &h);

    areaParedes = 2 * h * (comp + larg);
    caixas = ceil(areaParedes / 1.5);

    printf("\nÁrea total das paredes: %.2f m²\n", areaParedes);
    printf("Quantidade de caixas de azulejos necessárias: %.0f\n", caixas);

    return 0;
}
