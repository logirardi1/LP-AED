#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;

    printf("Digite a hora de início do jogo (em horas inteiras): ");
    scanf("%d", &hora_inicio);
    
    printf("Digite a hora de fim do jogo (em horas inteiras): ");
    scanf("%d", &hora_fim);

    if (hora_fim > hora_inicio) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = (24 - hora_inicio) + hora_fim;
    }

    printf("A duração do jogo foi de %d horas.\n", duracao);

    return 0;
}
