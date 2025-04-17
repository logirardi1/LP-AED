#include <stdio.h>

int main(){
    float sHora, sMensal, horasTrab;

    printf("Insira o valor dos seus ganhos por hora: ");
    scanf("%f", &sHora);

    printf("Insira suas horas trabalhadas mensais: ");
    scanf("%f", &horasTrab);

    sMensal = sHora * horasTrab;

    printf("O valor do seu salário mensal é de: %2.f.", sMensal);

    return 0;

}