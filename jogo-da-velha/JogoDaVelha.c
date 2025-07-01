#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tab[3][3];

void menu();
void inicializar();
void mostrar();
void pvp();
void pvc();
char ganhou();
int valida(int l, int c);

int main() {
    int op;
    
    do {
        menu();
        scanf("%d", &op);
        
        switch(op) {
            case 1: pvp(); break;
            case 2: pvc(); break;
            case 3: printf("Tchau!\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while(op != 3);
    
    return 0;
}

void menu() {
    printf("\n1 - Dois jogadores\n");
    printf("2 - Contra computador\n");
    printf("3 - Sair\n");
    printf("Opcao: ");
}

void inicializar() {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            tab[i][j] = ' ';
}

void mostrar() {
    printf("\n  1 2 3\n");
    for(int i = 0; i < 3; i++) {
        printf("%d %c|%c|%c\n", i+1, tab[i][0], tab[i][1], tab[i][2]);
        if(i < 2) printf("  -+-+-\n");
    }
    printf("\n");
}

void pvp() {
    int l, c;
    char player = 'X';
    char win = ' ';
    
    inicializar();
    
    while(win == ' ') {
        system("clear");
        printf("Jogador %c\n", player);
        mostrar();
        
        printf("Linha e coluna: ");
        scanf("%d %d", &l, &c);
        
        if(valida(l, c) && tab[l-1][c-1] == ' ') {
            tab[l-1][c-1] = player;
            win = ganhou();
            if(win == ' ') {
                int full = 1;
                for(int i = 0; i < 3; i++)
                    for(int j = 0; j < 3; j++)
                        if(tab[i][j] == ' ') full = 0;
                if(full) break;
                player = (player == 'X') ? 'O' : 'X';
            }
        } else {
            printf("Jogada invalida!\n");
            getchar(); getchar();
        }
    }
    
    system("clear");
    mostrar();
    if(win != ' ') printf("Jogador %c ganhou!\n", win);
    else printf("Empate!\n");
    getchar(); getchar();
}

void pvc() {
    int l, c;
    char win = ' ';
    
    inicializar();
    srand(time(NULL));
    
    while(win == ' ') {
        system("clear");
        printf("Sua vez (X)\n");
        mostrar();
        
        printf("Linha e coluna: ");
        scanf("%d %d", &l, &c);
        
        if(valida(l, c) && tab[l-1][c-1] == ' ') {
            tab[l-1][c-1] = 'X';
            win = ganhou();
            
            if(win == ' ') {
                do {
                    l = rand() % 3;
                    c = rand() % 3;
                } while(tab[l][c] != ' ');
                tab[l][c] = 'O';
                win = ganhou();
            }
        } else {
            printf("Jogada invalida!\n");
            getchar(); getchar();
        }
    }
    
    system("clear");
    mostrar();
    if(win == 'X') printf("Voce ganhou! Uhu\n");
    else if(win == 'O') printf("Computador ganhou!\n");
    else printf("Empate!\n");
    getchar(); getchar();
}

char ganhou() {
    // linhas
    for(int i = 0; i < 3; i++)
        if(tab[i][0] == tab[i][1] && tab[i][1] == tab[i][2] && tab[i][0] != ' ')
            return tab[i][0];
    
    // rows (não limitafa)
    for(int j = 0; j < 3; j++)
        if(tab[0][j] == tab[1][j] && tab[1][j] == tab[2][j] && tab[0][j] != ' ')
            return tab[0][j];
    
    // Diagonais
    if(tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[0][0] != ' ')
        return tab[0][0];
    if(tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] && tab[0][2] != ' ')
        return tab[0][2];
    
    return ' ';
}

int valida(int l, int c) {
    return (l >= 1 && l <= 3 && c >= 1 && c <= 3);
}