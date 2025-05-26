#include <stdio.h>

int main() {
    float comprimentoPista, consumoKmLitro;
    int totalVoltas, numeroReabast;
    float voltasTrecho, distPriTrecho, litros;

    printf("Comprimento da pista (em metros): ");
    scanf("%f", &comprimentoPista);

    printf("Número total de voltas: ");
    scanf("%d", &totalVoltas);

    printf("Número de reabastecimentos desejados: ");
    scanf("%d", &numeroReabast);

    printf("Consumo do carro (Km/L): ");
    scanf("%f", &consumoKmLitro);

    voltasTrecho = (float)totalVoltas / (numeroReabast + 1);
    distPriTrecho = (voltasTrecho * comprimentoPista) / 1000.0;
    litros = distPriTrecho / consumoKmLitro;

    printf("\nLitros necessários até o primeiro reabastecimento: %.2f L\n", litros);

    return 0;
}
