#include <stdio.h>
#include <math.h>

int main() {
    float larg, comp, pLamp;
    float area, potencia;
    int qLamps;

    printf("Digite a largura do cômodo (metros): ");
    scanf("%f", &larg);

    printf("Digite o comprimento do cômodo (metros): ");
    scanf("%f", &comp);

    printf("Digite a potência das lâmpadas (watts): ");
    scanf("%f", &pLamp);

    area = larg * comp;
    potencia = area * 18;
    qLamps = ceil(potencia / pLamp);

    printf("\nÁrea do cômodo: %.2f m²\n", area);
    printf("Potência necessária: %.2f watts\n", potencia);
    printf("Quantidade de lâmpadas necessárias: %d\n", qLamps);

    return 0;
}
