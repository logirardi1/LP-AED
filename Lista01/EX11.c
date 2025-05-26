#include <stdio.h>

int main(){
    int quantEleitores, votosB, votosN, votosV;
    float porcentB, porcentN, porcentV;

    printf("Indique quantas pessoas compareceram a votação: ");
    scanf("%i", &quantEleitores);

    printf("Insira quantos votos válidos a votação teve: ");
    scanf("%i", &votosV);

    printf("Insira quantos votos brancos a votação teve: ");
    scanf("%i", &votosB);

    printf("Insira quantos votos nulos a votação teve: ");
    scanf("%i", &votosN);

    if((votosB + votosN + votosV) > quantEleitores) {
        printf("ERRO: A quantidade de votos é maior que a quantidade de eleitores.");
        return 1; //shutdown no programa
    } else if ((votosB + votosN + votosV) < quantEleitores) {
        printf("ERRO: A quantidade de votos é menor que a quantidade de eleitores.");
        return 1;
    } else {

    porcentB = votosB * 100.0 / quantEleitores;
    porcentN = votosN * 100.0 / quantEleitores;
    porcentV = votosV * 100.0 / quantEleitores;

    printf("O porcentual de votos foram: \n Válidos: %.2f%%\n Brancos: %.2f%% \n Nulos: %.2f%% \n" , porcentV, porcentB, porcentN);
    
    }

    return 0;
}