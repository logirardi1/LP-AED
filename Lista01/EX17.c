#include <stdio.h>
#include <math.h>

int main() {
    float pi, raio, area;
    pi = 3.14159265358979323846;
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);
    area = pi * pow(raio , 2);
    printf("A área do seu circulo: %0.2f" , area);


}