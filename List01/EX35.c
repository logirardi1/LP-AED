#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if (valor > 0) {
        printf("Valor positivo\n");
    } else if (valor < 0) {
        printf("Valor negativo\n");
    } else {
        printf("Valor igual a zero\n");
    }

    return 0;
}
