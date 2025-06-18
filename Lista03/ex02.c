#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100], C[200];
    int i = 0, j = 0, k = 0;

    scanf("%s", A);
    scanf("%s", B);

    while (A[i] != '\0' && B[j] != '\0') {
        C[k++] = A[i++];
        C[k++] = B[j++];
    }

    while (A[i] != '\0')
        C[k++] = A[i++];

    while (B[j] != '\0')
        C[k++] = B[j++];

    C[k] = '\0';

    printf("%s\n", C);

    return 0;
}
