#include <stdio.h>

int main() {
    int numero_conta;
    float saldo, debito, credito, saldo_atual;

    printf("Digite o número da conta do cliente: ");
    scanf("%d", &numero_conta);

    printf("Digite o saldo: ");
    scanf("%f", &saldo);

    printf("Digite o débito: ");
    scanf("%f", &debito);

    printf("Digite o crédito: ");
    scanf("%f", &credito);

    saldo_atual = saldo - debito + credito;

    printf("Saldo atual da conta %d: R$ %.2f\n", numero_conta, saldo_atual);

    if (saldo_atual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
