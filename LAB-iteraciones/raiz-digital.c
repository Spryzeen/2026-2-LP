#include <stdio.h>
#include "raiz-digital.h"


int suma_de_digitos (int n) {
    int suma = 0;

    while (n) {
        int digito = n % 10;
        suma += digito;
        n /= 10;
    }

    return suma;
}

int raiz_digital (int n) {
    while (9 < n) {
        n = suma_de_digitos(n);
    }

    return n;
}

void imprimir_traza (int n) {
    printf("%d", n);

    while (9 < n) {
        n = suma_de_digitos(n);
        printf(" -> %d", n);
    }

    printf("\n");
}