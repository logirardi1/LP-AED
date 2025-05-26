#include <stdio.h>

int main() {
    float sAtual, porcentReajuste, sNovo;

    printf("Digite seu salario atual: ");
    scanf("%f", &sAtual);
    
    printf("Digite o percentual de reajuste (em %%): ");
    scanf("%f", &porcentReajuste);
    
    sNovo = sAtual + (sAtual * porcentReajuste / 100);
    
    printf("Seu novo salário é de: %.2f\n", sNovo);

    return 0;
}
