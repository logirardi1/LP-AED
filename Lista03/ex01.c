#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, 100, stdin);

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] -= 32;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
