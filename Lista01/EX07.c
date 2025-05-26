#include <stdio.h>

int main() {
    int anos, meses, dias, total_dias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite os meses: ");
    scanf("%d", &meses);

    printf("Digite os dias: ");
    scanf("%d", &dias);

    total_dias = (anos * 365) + (meses * 30) + dias;

    printf("Você viveu: %d\n", total_dias);

    return 0;
}
