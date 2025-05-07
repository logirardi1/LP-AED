#include <stdio.h>

int main() {
    float altura, peso_ideal;
    int sexo;
    scanf("%f %d", &altura, &sexo);

    if (sexo == 1)
        peso_ideal = (62.1 * altura) - 44.7;
    else if (sexo == 2)
        peso_ideal = (72.7 * altura) - 58;
    else {
        printf("Sexo inválido\n");
        return 1;
    }

    printf("Peso ideal: %.2f kg\n", peso_ideal);
    return 0;
}
