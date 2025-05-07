#include <stdio.h>

int main() {
    float n1, n2, media;
    scanf("%f %f", &n1, &n2);

    media = (n1 + n2) / 2;

    if (media >= 6.0)
        printf("PARABENS! Voce foi aprovado!\n");

    return 0;
}
