#include <stdio.h>

int main() {
    int codigo, senha;
    scanf("%d", &codigo);

    if (codigo != 1234) {
        printf("Usuario invalido!\n");
    } else {
        scanf("%d", &senha);
        if (senha != 9999)
            printf("Senha incorreta\n");
        else
            printf("Acesso permitido\n");
    }

    return 0;
}
