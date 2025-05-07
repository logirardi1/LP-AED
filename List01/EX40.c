#include <stdio.h>

int main() {
    char time1[50], time2[50];
    int g1, g2;
    scanf("%s %s %d %d", time1, time2, &g1, &g2);
    if (g1 > g2)
        printf("%s\n", time1);
    else if (g2 > g1)
        printf("%s\n", time2);
    else
        printf("EMPATE\n");
    return 0;
}
