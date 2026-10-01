#include <stdio.h>
#include "raiz-digital.h"

int main (void) {
    int n = 0;
    printf("Ingrese n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Entrada invalida\n");
        return 1;
    }

    imprimir_traza(n);
    printf("La raiz es: %d", raiz_digital(n));

    return 0;
}