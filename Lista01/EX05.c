#include <stdio.h>

int main (){
    int n;

    printf("Insira um caractere: ");
    scanf("%i", &n);

    n = (n-1);

    printf("O antecessor do seu número é: %i \n", n);

    return 0;
}