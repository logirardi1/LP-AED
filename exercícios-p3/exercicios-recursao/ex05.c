#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int diasDoMes(int mes, int ano) {
    int dias[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes == 2 && ehBissexto(ano)) return 29;
    return dias[mes - 1];
}

int diasDesdeInicio(Data d) {
    int dias = d.dia;
    for (int i = 1; i < d.mes; i++)
        dias += diasDoMes(i, d.ano);
    dias += (d.ano - 1) * 365;
    for (int i = 1; i < d.ano; i++)
        if (ehBissexto(i)) dias++;
    return dias;
}

int diferencaDias(Data d1, Data d2) {
    int a = diasDesdeInicio(d1);
    int b = diasDesdeInicio(d2);
    return a > b ? a - b : b - a;
}

int main() {
    Data d1 = {1, 1, 2020};
    Data d2 = {1, 1, 2021};
    printf("%d\n", diferencaDias(d1, d2));
    return 0;
}
