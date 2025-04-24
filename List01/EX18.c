#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento, pLamp;
    float area, potencia;
    int qLamps;

    printf("Digite a largura do cômodo (em metros): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do cômodo (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a potência da lâmpada (em watts): ");
    scanf("%f", &pLamp);

    area = largura * comprimento;
    potencia = area * 18;
    qLamps = ceil(potencia / pLamp);

    printf("\nÁrea do cômodo: %.2f m²\n", area);
    printf("Potência necessária: %.2f watts\n", potencia);
    printf("Quantidade de lâmpadas necessárias: %d\n", qLamps);

    return 0;
}
