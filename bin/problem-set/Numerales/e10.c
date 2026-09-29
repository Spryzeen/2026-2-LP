#include <stdio.h>

int main (void) {
    int num = -1;
    printf("Ingresa el numero: ");
    scanf("%d", &num);

    int t = num;
    int ultimo_digito = 10;
    int es_creciente_estricto = 1;

    while (t && es_creciente_estricto) {
        int digito = t % 10;

        if (digito >= ultimo_digito) {
            es_creciente_estricto = 0;
        }

        t /= 10;

        ultimo_digito = digito;
    }

    if (es_creciente_estricto) {
        printf("Es creciente estricto!");
    } else {
        printf("No es creciente estricto!");
    }

    return 0;
}