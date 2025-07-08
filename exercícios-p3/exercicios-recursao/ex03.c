#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int ra;
    char nome[50];
} Aluno;

typedef struct No {
    Aluno aluno;
    struct No *prox;
} No;

No *inicio = NULL;

void inserir(int ra, char *nome) {
    No *novo = malloc(sizeof(No));
    novo->aluno.ra = ra;
    strcpy(novo->aluno.nome, nome);
    novo->prox = inicio;
    inicio = novo;
}

void remover(int ra) {
    No *ant = NULL, *atual = inicio;
    while (atual && atual->aluno.ra != ra) {
        ant = atual;
        atual = atual->prox;
    }
    if (atual) {
        if (ant) ant->prox = atual->prox;
        else inicio = atual->prox;
        free(atual);
    }
}

void visualizar() {
    No *p = inicio;
    while (p) {
        printf("RA: %d, Nome: %s\n", p->aluno.ra, p->aluno.nome);
        p = p->prox;
    }
}

void buscar(int ra) {
    No *p = inicio;
    while (p) {
        if (p->aluno.ra == ra) {
            printf("Encontrado: RA: %d, Nome: %s\n", p->aluno.ra, p->aluno.nome);
            return;
        }
        p = p->prox;
    }
    printf("RA %d nao encontrado\n", ra);
}

int main() {
    inserir(1, "Ana");
    inserir(2, "Bruno");
    inserir(3, "Carlos");
    visualizar();
    buscar(2);
    remover(2);
    visualizar();
    buscar(2);
    return 0;
}
