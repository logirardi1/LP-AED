#include <stdio.h>

int main() {
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 + a2 + a3 != 180) {
        printf("Não é um triângulo válido.\n");
        return 1;
    }

    if (a1 == 90 || a2 == 90 || a3 == 90)
        printf("Retângulo\n");
    else if (a1 > 90 || a2 > 90 || a3 > 90)
        printf("Obtusângulo\n");
    else
        printf("Acutângulo\n");

    return 0;
}
