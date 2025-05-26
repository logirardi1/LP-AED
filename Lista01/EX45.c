#include <stdio.h>

int main() {
    float kg_morango, kg_maca, preco_morango, preco_maca, total, desconto = 0;
    scanf("%f %f", &kg_morango, &kg_maca);

    if (kg_morango <= 5)
        preco_morango = kg_morango * 2.50;
    else
        preco_morango = kg_morango * 2.20;

    if (kg_maca <= 5)
        preco_maca = kg_maca * 1.80;
    else
        preco_maca = kg_maca * 1.50;

    total = preco_morango + preco_maca;

    if ((kg_morango + kg_maca) > 8 || total > 25.00)
        total = total * 0.90;

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
