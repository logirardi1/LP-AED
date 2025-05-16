#include <stdio.h>
#include <math.h>

int main() {

double A, B, C;

    printf("Insira os valores dos lado do seu triâgulo: ");
    scanf("%lf %lf %lf" , &A, &B, &C);


    if (A < B + C && B < A + C && C < A + B) {
        if (A == B && B == C) {
            printf("Seu triâNgulo é EQUILÁTERO.\n");   
        } else if (A == B || C == A || B == C) {
            printf("Seu triângulo é ISÓCELES.\n");
        } else{
            printf("Seu trinagulo e ESCALENO.\n");
        }
    }else {
        printf("Os valores fornecidos NÃO formam um triângulo.\n");
    }
}