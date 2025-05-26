#include <stdio.h>
#include <math.h>

int main(void){
int nMaca;
float preco, vTotal;

printf("Insira a quantidade de maças que deseja comprar: ");
scanf("%i" , &nMaca);

while (nMaca <= 0){
    printf("Seu número e inválido, insira novamente. \n");
    printf("Insira a quantidade de maças que deseja comprar: ");
    scanf("%i" , &nMaca);
}

 if (nMaca > 12){
    preco = 1.30;
    vTotal = nMaca * preco;
    printf("Suas maçãs estão saindo á R$%.2f cada!\nDando um total de %.2f" , preco , vTotal);
 } else if (nMaca <= 12){
    preco = 1.00;
    vTotal = nMaca * preco;
    printf("Suas maçãs estão saindo á R$%.2f cada!\nDando um total de R$%.2f" , preco , vTotal);
 } 
 return 0;
}