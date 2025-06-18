#include <stdio.h>
#include <string.h>

void substituir(char *A, char *B, char *C, char *resultado) {
    int i = 0, j = 0, k = 0, lenA = strlen(A), lenB = strlen(B), lenC = strlen(C);

    while (i < lenA) {
        if (strncmp(&A[i], B, lenB) == 0) {
            for (int m = 0; m < lenC; m++)
                resultado[k++] = C[m];
            i += lenB;
        } else {
            resultado[k++] = A[i++];
        }
    }
    resultado[k] = '\0';
}

int main() {
    char A[200], B[50], C[50], resultado[300];

    fgets(A, 200, stdin);
    fgets(B, 50, stdin);
    fgets(C, 50, stdin);

    if (A[strlen(A)-1] == '\n') A[strlen(A)-1] = '\0';
    if (B[strlen(B)-1] == '\n') B[strlen(B)-1] = '\0';
    if (C[strlen(C)-1] == '\n') C[strlen(C)-1] = '\0';

    substituir(A, B, C, resultado);

    printf("%s\n", resultado);

    return 0;
}
