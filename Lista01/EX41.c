#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x == y)
        printf("Numeros iguais\n");
    else if (x > y)
        printf("Primeiro é maior\n");
    else
        printf("Segundo maior\n");
    return 0;
}
