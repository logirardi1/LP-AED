#include <stdio.h>

int main() {
    int a, b, op;
    scanf("%d %d %d", &a, &b, &op);

    if (op == 1)
        printf("Resultado: %d\n", a + b);
    else if (op == 2)
        printf("Resultado: %d\n", a - b);
    else if (op == 3)
        printf("Resultado: %.2f\n", (float)a / b);
    else if (op == 4)
        printf("Resultado: %d\n", a * b);
    else
        printf("Operação inválida\n");

    return 0;
}
