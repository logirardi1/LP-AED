#include <stdio.h>
#include <math.h>

int main(void){
int N;

printf("Insira o valor do seu número: ");
scanf("%i" , &N);

 if (N >= 0){
    printf("Seu numero é positivo!");
 } else if (N < 0){
    printf("Seu número é negativo!");
 }
 return 0;
}