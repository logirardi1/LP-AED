#include <stdio.h>

int main() {
    float nota1, nota2, nota3, mediaFinal;

    printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (peso 5): ");
    scanf("%f", &nota3);

    mediaFinal = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

    printf("A média final do aluno é: %.2f\n", mediaFinal);

    return 0;
}
