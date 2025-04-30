#include <stdio.h>
#include <math.h>

int main(void){
int N;

printf("Insira o valor do seu número: ");
scanf("%i" , &N);

while (N < 0)
{
    printf("Seu número e inválido, insira apenas valores naturais \n");
    printf("Insira seu número novamente: ");
    scanf("%i" , &N);

}
 if (N == 10){
    printf("Seu numero é igual a 10!");
 } else if (N >= 10){
    printf("Seu número é maior que 10!");
 } else if (N <= 10){
    printf("Seu número e menor que 10!");
 }
 return 0;
}