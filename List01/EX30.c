#include <stdio.h>

int main() {
    float horas_trabalhadas, salario_hora, salario_total, horas_extras;

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o salário por hora: ");
    scanf("%f", &salario_hora);

    horas_extras = horas_trabalhadas - 160;
    
    if (horas_extras > 0) {
        salario_total = (160 * salario_hora) + (horas_extras * salario_hora * 1.5);
    } else {
        salario_total = horas_trabalhadas * salario_hora;
    }

    printf("\nO salário total do funcionário é: %.2f\n", salario_total);

    return 0;
}
