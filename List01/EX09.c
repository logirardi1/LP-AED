#include <stdio.h>
int main(){
    float base, altura, area, darea;

    printf("Insira o valor Base: ");
    scanf("%f", &base);

    printf("Insira o valor da Altura ");
    scanf("%f", &altura);

    area = base * altura;

    darea = area * 2;

    printf("A área do seu quadrilátero é: %.2f, e o seu dobro é: %.2f\n" , area ,darea );
    
    return 0;
    
}