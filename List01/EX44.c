#include <stdio.h>

int main() {
    int h1, h2, m1, m2;
    scanf("%d %d %d %d", &h1, &h2, &m1, &m2);

    int homem_mais_velho = (h1 > h2) ? h1 : h2;
    int homem_mais_novo  = (h1 < h2) ? h1 : h2;
    int mulher_mais_velha = (m1 > m2) ? m1 : m2;
    int mulher_mais_nova  = (m1 < m2) ? m1 : m2;

    int soma = homem_mais_velho + mulher_mais_nova;
    int produto = homem_mais_novo * mulher_mais_velha;

    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    return 0;
}
