#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Digite o terceiro valor: ");
    scanf("%f", &c);

    if (a > b && a > c) {
        printf("O maior valor é: %.2f\n", a);
    } else if (b > a && b > c) {
        printf("O maior valor é: %.2f\n", b);
    } else {
        printf("O maior valor é: %.2f\n", c);
    }

    return 0;
}
