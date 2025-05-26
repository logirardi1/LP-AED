#include <stdio.h>

int main() {
    float oInicio, oFim, litros, valorRecebido;
    float distancia, consumoMed, valorCombustivel, lucro;

    printf("Marcação do odômetro no início do dia (Km): ");
    scanf("%f", &oInicio);

    printf("Marcação do odômetro no final do dia (Km): ");
    scanf("%f", &oFim);

    printf("Litros de combustível gastos: ");
    scanf("%f", &litros);

    printf("Valor total recebido dos passageiros (R$): ");
    scanf("%f", &valorRecebido);

    distancia = oFim - oInicio;
    consumoMed = distancia / litros;
    valorCombustivel = litros * 2.90;
    lucro = valorRecebido - valorCombustivel;

    printf("\nMédia de consumo: %.2f Km/L\n", consumoMed);
    printf("Lucro líquido do dia: R$ %.2f\n", lucro);

    return 0;
}
