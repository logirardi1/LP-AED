#include <stdio.h>

int main() {
    float nota1, nota2, optativa, media;
    scanf("%f %f %f", &nota1, &nota2, &optativa);

    if (optativa != -1) {
        if (nota1 < nota2 && optativa > nota1)
            nota1 = optativa;
        else if (nota2 < nota1 && optativa > nota2)
            nota2 = optativa;
    }

    media = (nota1 + nota2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 6.0)
        printf("Aprovado\n");
    else if (media >= 3.0)
        printf("Exame\n");
    else
        printf("Reprovado\n");

    return 0;
}
