#include <stdio.h>

int main() {
    float litros, preco, total;
    char tipo;
    scanf(" %c %f", &tipo, &litros);

    if (tipo == 'A') {
        preco = 2.90;
        if (litros <= 20)
            total = litros * (preco * 0.97);
        else
            total = litros * (preco * 0.95);
    } else if (tipo == 'G') {
        preco = 3.30;
        if (litros <= 20)
            total = litros * (preco * 0.96);
        else
            total = litros * (preco * 0.94);
    }

    printf("Valor a pagar: R$ %.2f\n", total);
    return 0;
}
